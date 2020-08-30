/* Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn]. */

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
//         vector<int> soln(2*n,0);
        
//         for(int i{0},j{0}; i<n*2 && j<n; i+=2,j++)
//         {
//             soln[i] = nums[j];
//             soln[i+1] = nums[n+j];
//         }
        
        // vector<int> soln{};
        // for(int i{0}; i<n; ++i)
        // {
        //     soln.push_back(nums[i]);
        //     soln.push_back(nums[n+i]);
        // }
        vector<int> soln(2*n,0);
        for (int i = 0; i < n; i++)
        {
            soln[2*i] = nums[i];
            soln[2*i+1] = nums[n+i];
        }
        
        return soln;
    }
};