#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{ 

  int n1{};
  int n2{};
  vector <string> palind;
  cin>>n1>>n2;
  
  int start = n1 * 1000000;
  int end   = (n2 * 1000000) + 235959;

//   cout<<start<< "  "<<end;
  
  for(int i=start;i<=end;++i)
  { 
    string copyStr =to_string(i);
    cout<<i;
  	// reverse(to_string(i).begin(),to_string(i).end());
    // if (copyStr == to_string(i))
    // {
    //     palind.push_back(copyStr);
    // }
  }
  
  cout<<palind.size();
  
 return 0; 
}