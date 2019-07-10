#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int y = 1;
std::vector<int> primelist = {};
int main()
{
    std::vector<int> primelist = { 3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101 };
    primelist.push_back(2);
    for (int y = 103; y <= 1000; y += 2) {
        bool prime = true;
        for (int x = 0; x < sizeof(primelist) / 4; x++) {
            int z = primelist[x];
			if (y % z == 0) { prime = false; break; };
			if (z > sqrt(y)) { break; };
        }
		if (prime == true) { primelist.push_back(y); };
    }
    for (int n : primelist) {std::cout << n << endl;}
    }
