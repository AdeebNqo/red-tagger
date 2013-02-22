#include<iostream>
#include "tagger.h"
#include<boost/filesystem.hpp>
#include <boost/foreach.hpp>
namespace fs = boost::filesystem;

tagger::tagger(){
	std::cout<<"Tagger created!\n";
}
tagger::~tagger(){
	std::cout<<"Tagger dead.\n";
}	
bool tagger::get_tag_subfolder_status(){
	return tag_subfolder_status;
}
void tagger::renameFile(std::string filename){
	std::cout<<"RenameFile: "<<filename<<"\n";
}

void tagger::renameFolder(std::string foldername){
	std::cout<<"RenameFolder!\n";
	
}
void tagger::reallyRenameFolder(std::string foldername){
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
				renameFolder((*it).path().string());
			}
	      	}
       }
}
