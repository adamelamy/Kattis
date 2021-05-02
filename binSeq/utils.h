#ifndef utils
#define utils

#include <thread>

int setNThreads(int * nThreads, int len, int max);
bool scan(std::string seq);
void setupThreads(int nThreads, std::vector<std::thread> threads);
vector<int> scan(string * input);

#endif
