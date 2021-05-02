#include <string>
#include <bitset>
#include <vector>

void permute(std::string userInput, std::vector<std::string> * q){
	vector<int> positions = scan(&userInput);
	N = positions.length()
	q->push_back(userInput);
		
	for (int i = 1; i < 2**N; i++){
		q->push_back(setBits(positions,bitset<N>(i),userInput));	
	}
}

string setBits(vector<int> positions, bitset<N> bits, string input){
	i = 0;
	for (int pos : positions){
		if (bits.test(i)){
			input[pos] = '1';
		}
		i++;
	}
	return input;
}
