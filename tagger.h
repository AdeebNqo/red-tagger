#ifndef TAGGER_H
#define TAGGER_H
#include<string>
class tagger{
	public:
		//Constructor
		tagger();
		~tagger();
		struct tag{
			std::string date;//Date of tag creation
			std::string tag_value;
		};
    		//method for renaming a given file
    		void renameFile(std::string filename);
    		//method for renaming a folder
    		void renameFolder(std::string foldername);
		void reallyRenameFolder(std::string foldername);
};

#endif // TAGGER_H
