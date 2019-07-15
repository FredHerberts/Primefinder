#include <iostream>
#include <vector>
#include <cmath>
#include<ctime>
using namespace std;
int y = 1;
int count = 26;
long long number = 1000000;
std::vector<int> primelist = {};
int start_s=clock() ;
int main()
{
    std::vector<int> primelist = { 3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101 };
    cout << 2 << endl;
    for (int y = 103; y <= number; y += 2) {
        bool prime = true;
        for (int x = 0; x < number; x++) {
            int z = primelist[x];
            if (y % z == 0) { prime = false; break; };
            if (z > sqrt(y)) { break; };
        }
        if (prime == true) { primelist.push_back(y);};
    }
    for (int n : primelist) { std::cout << n << endl; }
    int stop_s=clock();
    cout<<(stop_s-start_s)/double(CLOCKS_PER_SEC);
}
