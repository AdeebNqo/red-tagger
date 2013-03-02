#Makefile for tagger
tagger: main.cpp tagger.o
	@g++ main.cpp tagger.o -o tagger -I/opt/local/include -L/opt/local/lib -lboost_filesystem -lboost_system
tagger.o: tagger.cpp
	@g++ tagger.cpp -c
run:
	@./tagger
clean:
	@rm -f *.o tagger
