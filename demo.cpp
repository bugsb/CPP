#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> arr = {2,5,8,3,2,77,32};
    sort(arr.begin(),arr.end());
    for (const int it:arr )
    {
        cout<<" "<<it;
    }
    cout<<endl;
    sort(arr.rbegin(),arr.rend());
    for (const int it:arr )
    {
        cout<<" "<<it;
    }
}