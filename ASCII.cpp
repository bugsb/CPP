#include <iostream>

using namespace std;
void AtoZ();
int main()
{
    char A{ 65 };
    char a{ 97 };

    // cout << A << '\v';
    // cout << a;

    AtoZ();

}

void AtoZ()
{
    int counter = 65;

    for(int i =counter; i <= counter+25; i++)
    {
        cout << char(i) << '\t' << char(i + 97 - counter) << '\n';
    }
        
}