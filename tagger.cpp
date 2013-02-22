#include<iostream>
#include "tagger.h"
#include<boost/filesystem.hpp>
#include<stdio.h>
#include<sstream>
#include<vector>
#include<string>
namespace fs = boost::filesystem;

tagger::tagger(std::string mytag){
	tag = mytag;
	std::cout<<"Tagger created!\n";
}
tagger::~tagger(){
	std::cout<<"Tagger dead.\n";
}	
bool tagger::get_tag_subfolder_status(){
	return tag_subfolder_status;
}
void tagger::renameFile(std::string filename){
	int status = rename(filename.c_str(),Tag(filename).c_str());
	std::cout<<"RenameFile "<<(status==0?"true":"false")<<"\n";
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
					renameFile((*it).path().string());
				}
				renameFolder((*it).path().string());
			}
	      	}
       }
}
//method for changing the name of a file or folder
std::string tagger::Tag(std::string filename){
	std::stringstream st(filename);
	std::string token;
	std::vector<std::string> tokens;
	while(!st.eof()){
		std::getline(st,token,'/');
		tokens.push_back(token);
	}
	std::vector<std::string>::iterator it = tokens.end();
	std::string new_name = *(--it);
	new_name += tag;
	return new_name;
}
