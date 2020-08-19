#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int splitArr(vector<int> arr,int size);
    
int splitArr(vector<int> arr,int size)
{   
    int lSum{};
    sort(arr.begin(),arr.end());
    for (const int itr:arr)
    {
        lSum += itr;
    }
    int rSum{};

    sort(arr.rbegin(),arr.rend());

    for (const int it:arr )
    {
        rSum += it;
        lSum -= it; 

        if (lSum == rSum)
        {
            return lSum;
        }

    }
    return -1;
}

int main()
{  
    vector<int> arr;
    int size{};
    cout << "Enter the size\n";
    cin >> size;
    cout << "Enter "<<size << "elements";

    for ( int i{0}; i<size ; ++i)
    {   
        int temp{};
        cin >>temp;
        arr.push_back(temp);
    }    
    int index = splitArr(arr,size);
    // display(arr);
    cout<<'\n'<<index;
    
    return 0;

}