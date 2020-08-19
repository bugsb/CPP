#include <
#define LOG(x) std::cout <<x <<'\n';

int main()
{
    static int i{5};

    if(--i)
    {
         main();
        LOG(i); // 0 0 0
       
    }


    return 0;
}