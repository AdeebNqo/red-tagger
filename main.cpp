#include <iostream>
#include<fstream>
#include<string>
#include "main.h"
#include "tagger.h"
int main(void)
{
	std::string in;
	std::string exit="exit";
	tagger myTagger("Adeeb");
	std::ifstream file("test.txt");
	file >> in;
	std::string folder = in;
	myTagger.renameFolder(folder);
	/*while(true){
		std::cout<<"Enter stuff :\n";
		std::cin>>in;
		if (in==exit){
			break;
		}
		std::cout<<"\nEntered: "<<in<<std::endl;
	}*/
	return 0;
}

