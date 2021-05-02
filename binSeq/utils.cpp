#include <thread>
#include <vector>
#include "utils.h"
#include "algo.h"


bool isSorted(std::string seq){
	bool found = false;
	
	for (char c : seq){
		if (c == '1' && !found){
			found = true;
		}
		else if (c == '0' && found){
			return false;
		}
	}
	return true;
}

vector<int> scan(string * input){
	vector<int> positions;
	
	for (int i = 0; i < input->length(), i++){
		if ((*input)[i] == '?'){
			positions.push_back(i);
			(*input)[i] = '0';
		}
	}

	return positions;
}

void setupThreads(int nThreads,std::vector<std::thread> * threads){
	threads->push_back(std::thread(setupThreadsInternal,nThreads - 1, threads));
}

void setupThreadsInternal(int nThreads, std::vector<std::thread> * threads){
	for (int i = (nThreads - 1); i > 0; i--){
		threads->push_back(std::thread(analyze));
	}
}

int setNThreads(int * nThreads, int len,int max){
	int candidate = (2**len)/30;
	
	if (candidate < 1){
		candidate = 1;
	}
	else if (candidate > max){
		candidate = max;
	}
	
	*(nThreads) = candidate;
	return *(nThreads);		
}
