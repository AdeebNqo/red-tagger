#include<iostream>
#include "tagger.h"
#include<boost/filesystem.hpp>
namespace fs = boost::filesystem;

tagger::tagger(){
	std::cout<<"Tagger created!\n";
}
tagger::~tagger(){
	std::cout<<"Tagger dead";
}	
void tagger::renameFile(std::string filename){
	std::cout<<"RenameFile";
}

void tagger::renameFolder(std::string foldername){
	std::cout<<"RenameFolder!";
	
}
void tagger::reallyRenameFolder(std::string foldername){
	fs::path folder(foldername);
	if (exists(folder)){
		std::cout<<"It exists!\n";
	}
}
