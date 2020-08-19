#include<iostream>


class Solution {
public:
    bool isPalindrome(int x) {
        
//         string str_x = to_string(x);
//         string copy_x = str_x;
//         reverse(str_x.begin(), str_x.end());
        
//         if (str_x == copy_x) {return true;}
//         return false;
        
        int copy_x{x};
        long int rev{0};
        if(x < 0) { return 0;}
        while(x != 0)
        {   
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        if (rev == copy_x)
        {
            return 1;
        }
        return 0;
        
        
        }
};

int main()
{
    Solution s;
    std::cout<<s.isPalindrome(1212);
}