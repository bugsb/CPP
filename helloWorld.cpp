#include<iostream>
#include <bitset>

using namespace std;

int main()
{
    // cout<<endl<<"Hello World!"<<endl<<endl;
    bitset<4> x { 0b1111 };
 
    cout << x << '\n';
    cout << (x >> 2) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 2) << '\n'; // shift left by 1, yielding 1000
    
 

    return 0;
}