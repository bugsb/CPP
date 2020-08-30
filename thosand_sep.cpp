class Solution {
public:
    string thousandSeparator(int n) {
        
        if(n<999) {return to_string(n);}
        
        string new_n = to_string(n);
        reverse(new_n.begin(),new_n.end());
        string soln ="";
        // int len = new_n.length();
        int count{0};
        for (auto it : new_n)
        {
           
            if(count == 3)
            {
                soln.push_back('.');
                soln.push_back(it);
                count =0;
            }
            
            else
                 soln.push_back(it);
            
            ++count;
        }
            reverse(soln.begin(),soln.end());
        
            return soln;
    
    }
    
};