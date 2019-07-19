#include <iostream>
#include <math.h> 
#include <vector>
#include<ctime>
using namespace std;
std::vector<int> primelist = {2};
int number = 1000000;
int start_s=clock() ;
int main()
{
    int prime[number+1] ={};
    std::fill_n(prime, number+1, 1);
    for (int y = 3;y < sqrt(number+1);y+= 2)
    {if (prime[y] == 1)
    {for (int x = y*y;x < number+1; x += y)
    {prime[x] = 0;}}}
    for ( int x=3; x < number+1; x+=2){
      if (prime[x] == true){primelist.push_back(x);}}
     for(int i=0; i < primelist.size(); i++)
      std::cout << primelist.at(i) << ' ';
      int stop_s = clock();
    cout << (stop_s - start_s) / double(CLOCKS_PER_SEC);
	return 0;
      
      }

