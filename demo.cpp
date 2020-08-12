#include <iostream>
// #include <iterator> // for std::size
void fun()
{
    std::cout<<"This is Fun";
}


void printVar(void (*newf)())
{
    newf();
}
int main()
{
   int arr[]{1,4,6,7};

//    std::cout<<&arr[0]<<std::endl;
//    std::cout<<arr<<std::endl;
   auto var = fun;
   printVar(fun);
    return 0;
}