#include<iostream>
#include<string>
/* Using the cobination of cin and getline needs our attention so flush th \n 
    stuck in input stream of cin */
int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string name{};
    cout << "Enter your age\n";
    int age{};
    cin >> age;

    std::cin.ignore(32767,'\n'); // It is used to flush the \m charcter stuck in ip stream
                                //means ignore upto 32767 char untill \n is found

    cout << "Enter your name\n";
    std::getline(cin,name);

    cout<<"your name is "<<name <<" and Your age is  :" <<age;

}