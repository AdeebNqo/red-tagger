#ifndef TAGGER_H
#define TAGGER_H
#include<string>
class tagger{
	public:
		//Constructor
		tagger(std::string mytag);
		~tagger();
		struct tag{
			std::string date;//Date of tag creation
			std::string tag_value;
		};
    		//method for renaming a given file
    		void renameFile(std::string filename);
    		//method for renaming a folder
		void renameFolder(std::string foldername);
		//method for getting status of tag_subfolders
		bool get_tag_subfolder_status();
		std::string Tag(std::string filename);
	private:
		//rename subfolders?
		std::string tag;
		bool tag_subfolder_status;
};

#endif // TAGGER_H
