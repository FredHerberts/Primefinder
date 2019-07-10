#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	std::vector<int> primelist = { 3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101 };
	int number = 1000;
	primelist.push_back(2);
	for (int y = 103; number+1; 2){
		int prime = 1;
			for (int x = 0; x < sizeof(primelist) / 4; x++) {
				int z = primelist[x];
				if (y % x == 0){prime = 2;break;}
				if (z > sqrt(y)) {break;}}}
	if (prime == 1) {primelist.push_back(y);}
	return 0;
}
