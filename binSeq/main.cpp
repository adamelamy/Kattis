#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <bitset>
#include "utils.h"
#include "algo.h"

#define MAXTHREADS 10
std::vector<std::string> q;

int main(){
	int nThreads = 1;
	std::vector<std::thread> threads;
	std::string userInput;
	std::cin >> userInput;
	setupThreads(setNThreads(&nThreads, userInput.length(),MAXTHREADS),threads);
	permute(userInput,&q);	
	return 0;
}
