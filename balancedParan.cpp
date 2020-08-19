class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        for(auto itr : s)
        {
            if(stk.empty())
            {
                stk.push(itr);
            }else if(itr == ')' && stk.top() == '(')
            {
             stk.pop();  
                
            }else if(itr == '}' && stk.top() == '{')
            {
                stk.pop();
                    
            }else if(itr == ']' && stk.top() == '[')
            {
                stk.pop();
            }else{
                stk.push(itr);
            }
        }
        if(stk.empty())
            return true;
        else
        return false;
    }
}; 