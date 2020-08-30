#include<iostream>

using namespace std;
bool isPalind(int num);
int main()
{
    int num{};
    cout<<"Enter The number\n";
    cin>>num;
  

    int i{0};
    while(++i)
    {
        if(isPalind(num))
        {
            cout<<"The nearest palind to " <<num <<" is: "<<num;
            break;
        }
            
        else if(isPalind(num+i))
        {
            cout<<"The nearest palind to " <<num <<" is: "<<num+i;
            break;
        }
        else if(isPalind(num-i))
        {
            cout<<"The nearest palind to " <<num <<" is: "<<num-i;
            break;
        }
        else
        {
            continue;
        }
        
    }
        return 0;
}

bool isPalind(int num)
{
    int rev{0};
    int copy = num;
    while (num !=0)
    {
    int mod = num % 10;
    rev = rev * 10 + mod;
    num /= 10;
    }
    if (rev == copy)
        return true;
    else
        return false;

}

