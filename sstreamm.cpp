/*	Print the integers after parsing it.  */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	 stringstream ss(str);
     vector<int> soln;
    char ch;
    int a;
    while(ss>>a)
    {
        ss>>ch;
        soln.push_back(a);
    }
   
    return soln;

}
int main() {
    string str;
    cin >> str;
   
    vector<int> integers = parseInts(str);
    
    
    for(int i = 0; i < integers.size(); i++) {

        cout << integers[i] << "\n";
    }
    
    return 0;
}
