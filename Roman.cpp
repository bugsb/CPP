class Solution {
public:
    int romanToInt(string s) {
        map <char,int> val;
        val['I']=1;
        val['V']=5;
        val['X']=10;
        val['L']=50;
        val['C']=100;
        val['D']=500;
        val['M']=1000;
    
        int ans{};
        int temp{};
        
        for(int i = 0 ; i< s.length(); ++i)
        {
            if(val[s[i]] < val[s[i+1]] && i+1 < s.length()) //compare adj no
            {
                temp = val[s[i+1]] - val[s[i]];
                i++;  // not to compare ith index twice
               
            
            }
            else
            temp = val[s[i]];
                
            ans += temp;
        }
            return ans;   
    }
};