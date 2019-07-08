#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> primelist = { 2, 3, 5, 7 };
    primelist.push_back(11);
    for (int n : primelist) {
        std::cout << n <<endl;
    }
    return 0;
}
