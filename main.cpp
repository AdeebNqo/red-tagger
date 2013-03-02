#include "tagger.h"
int main(int argc, char *argv[])
{
	tagger my_tagger("/home/mhlzol004/Programming/Tagger/Test","testTag");
	my_tagger.tagSubfolder(true);
	my_tagger.start();
	return 0;
}
