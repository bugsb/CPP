class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> traingle;
        
        if(numRows <1)
            return traingle; 
        
        vector<int> firstRow;
        firstRow.push_back(1);
        traingle.push_back(firstRow);
        
        for(int i{1}; i<numRows; i++)
        {
            vector<int> current;
            vector<int> prev = traingle.at(i-1);
            current.push_back(1);
            for(int j{1}; j<i ; j++)
            {
                current.push_back(prev.at(j) + prev.at(j-1));
            }
            current.push_back(1);
            traingle.push_back(current);
        }
            return traingle;   
    }
};