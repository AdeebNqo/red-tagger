#include<iostream>
#include "tagger.h"
#include<boost/filesystem.hpp>
#include<stdio.h>
#include<sstream>
#include<vector>
#include<string>
#include<sstream>
#include<fstream>
namespace fs = boost::filesystem;

tagger::tagger(std::string folder,std::string mytag){
    tag_subfolder_status = false;
    tag_value = mytag;
    folder_name = folder;
    file_separator = '/';
}
tagger::~tagger(){

}
void tagger::start(){
    std::ofstream file("recent_tags.tag");
    file<<tag_value<<std::endl;
    file << folder_name <<std::endl;
    file << tag_subfolder_status<<std::endl;

    renameFolder(folder_name);
    file.close();
}
void tagger::tagSubfolder(bool state){
    tag_subfolder_status = state;
}	
void tagger::renameFile(std::string filename){
    const char * oldname = filename.c_str();

    //Constructing the new name
    int pos = filename.find_last_of(file_separator);
    std::string name = filename.substr(pos,filename.size()-pos);

    std::string startofname = filename.substr(0,pos);
    int posOfDot = name.find_last_of('.',name.size());

    const char * newname;// = filename.c_str();
    //if filename has extension
    if (posOfDot>-1){
        std::string dotTag("["+tag_value+"].");
        name.replace(posOfDot,1,dotTag.c_str());
        newname = (startofname+name).c_str();
    }
    //if filename does not have extension
    else{
        newname = (filename+"["+tag_value+"]").c_str();
    }
    renameFile(oldname, newname);
}
void tagger::renameFile(std::string oldname,std::string newname){
    fs::rename(oldname,newname);
}

void tagger::renameFolder(std::string foldername){
    fs::path folder(foldername);
    if (exists(folder)){
        //Iterating through sub(files/folders)
        fs::directory_iterator end;
        for(fs::directory_iterator it(folder) ; it != end ; ++it ){
            if (!is_directory(*it)){
                renameFile((*it).path().string());
            }
            else{
                if (tag_subfolder_status){
                    renameFolder((*it).path().string());
                }
            }
        }
    }
}
