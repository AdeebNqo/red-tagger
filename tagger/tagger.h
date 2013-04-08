#ifndef TAGGER_H
#define TAGGER_H
#include<string>
class tagger{
public:
    tagger(std::string foldername,std::string mytag);
    ~tagger();
    //variables
    char file_separator;
    std::string tag_value;
    std::string folder_name;
    bool tag_subfolder_status;


    //methods


    void start();
    void tagSubfolder(bool condition);
    //method for renaming a given file
    void renameFile(std::string filename);
    void renameFile(std::string oldname,std::string newname);
    //method for renaming a folder
    void renameFolder(std::string foldername);
};

#endif // TAGGER_H
