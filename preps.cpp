#include<iostream>
#define FOO

using namespace std;

int main()
{
    #ifdef FOO
        cout<<"FOO\n";
    #endif

    #ifdef GOO
        cout<<"GOO\n";
    #endif

    #if 0
        Everything written from
        here will get commented
    #endif
}