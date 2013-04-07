#ifndef TAGGER_H
#define TAGGER_H
#include<string>
class tagger{
	public:
		//Constructor
		tagger(std::string foldername,std::string mytag);
		~tagger();
		char fileSeparator;
		struct tag{
			std::string date;//Date of tag creation
			std::string tag_value;
			std::string foldername;
		};
		void start();//method for starting the tagging
		void tagSubfolder(bool condition);
        bool tag_subfolder_status;

	private:
    		//method for renaming a given file
    		void renameFile(std::string filename);
    		//method for renaming a folder
		void renameFolder(std::string foldername);
};

#endif // TAGGER_H
