#include<iostream>
#include "tagger.h"
#include<boost/filesystem.hpp>
#include<stdio.h>
#include<sstream>
#include<vector>
#include<string>
#include<sstream>
namespace fs = boost::filesystem;
tagger::tag givenInfo;
tagger::tagger(std::string folder,std::string mytag){
	givenInfo.tag_value = mytag;
	givenInfo.foldername = folder;
	fileSeparator = '/';
}
tagger::~tagger(){

}
void tagger::start(){
	renameFolder(givenInfo.foldername);
}
void tagger::tagSubfolder(bool state){
	tag_subfolder_status = state;
}	
void tagger::renameFile(std::string filename){
	const char * oldname = filename.c_str();
	
	//Constructing the new name
	int pos = filename.find_last_of(fileSeparator);
	std::string name = filename.substr(pos,filename.size()-pos);
	
	std::string startofname = filename.substr(0,pos);
	int posOfDot = name.find_last_of('.',name.size());	
	
	const char * newname;// = filename.c_str();	
	//if filename has extension	
	if (posOfDot>-1){
		std::string dotTag("["+givenInfo.tag_value+"].");
		name.replace(posOfDot,1,dotTag.c_str());
		newname = (startofname+name).c_str();
	}
	//if filename does not have extension
	else{
		newname = (filename+"["+givenInfo.tag_value+"]").c_str();
	}
	// = (filename).c_str();
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
				renameFolder((*it).path().string());
			}
	      	}
       }
}
