#include<iostream>
#include<cstring>

using std::cout;

int main()
{                                    //will not work with std::string use c style string
    char name[] = "Manishi";
    char duplicate[30];
    char manish[20];
    std::strncpy(manish,name,6);
    std::strcpy(duplicate,name);
    cout<<duplicate<<'\n'; //manishi
    cout<<manish<<'\n';    //manish

  
    std::strcat(name," Anand");
    std::strncat(manish,"Andy",3);
    cout<<name<<'\n';
    cout<<manish;

    return 0;
}
