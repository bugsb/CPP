#include <iostream>
#include <vector>

using namespace std;

void ForEach( vector <int> arr,void (*lambda)(int val)) // here lambda is the func pointer
                                                        //to the lambda fun
{
    for(int i :arr)
    {
        lambda(i);
    }
}

int main()
{
    vector <int> arr{1,3,5,7,9};

    ForEach(arr,[](int val){            //the entire lambda fun is passed to ForEach 2nd arg

                        cout<<"Value is :"<<val <<'\n';
    }
    );
}