#include "skudef.h"
#include <iostream>
#include <fstream>
#include <functional>

#define MEMSIZE 1024*256

using namespace std;

void exec(int, char**);

void runcode(char*);

int main(int argc, char* argv[]){
	exec(argc,argv);
	return 0;
}


void exec(int argc, char* argv[]){
	ifstream readcode;
	char progmem[MEMSIZE]={0};
	char* progc=progmem;
	for(int i = 1; i<argc; i++){
		if(argv[i][0] != '-'){
			readcode.open(argv[i]);
			while(!readcode.eof()){
				*progc=readcode.get();
				progc++;
			}
			progc--;
			readcode.close();
		}
	}
	for(char c:progmem){
		if(c)
		cout<<c;
	}
	delete &readcode;
	delete progc;
	//начинается выполнение кода на skumbler
	runcode(progmem);
}

void runcode(char progmem[]){
	//здесь выполняется код из progmem
}