#include<iostream>

using std::cout;

int main()
{
    //simple lambda
    auto fun = [](){cout<< "Hello From lamba\n"; };

    //annonymus fun
    [](){cout << "Hello from annonymus\n"; }();

    //with arg
    [](int a, int b){cout<<"a + b = "<<a+b <<'\n'; }(6,4);

    //returning lambda 
    cout<<"The Sum is :" << [](int a, int b) -> int { return a+b; }(8,9)<<'\n';

    // capture  
    int a{7}; int b{3};

    [a,b](){cout << "A and B are : "<<a <<" "<<b <<'\n'; }();

    // capture all 
    [=](){cout << "A and B are : "<<a <<" "<<b <<'\n'; }();

    //capture all by ref
    [&](){cout << "A+1 and B+1 are : "<<a++ <<" "<<b++ <<'\n'; }();

    cout<<"New A and B are : "<<a <<" "<<b <<'\n';

    fun();


    return 0;
}