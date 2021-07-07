class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int size_1 = matrix.size();
        int size_2 = matrix[0].size();
        for(int i = 0;i<size_1-1;i++)
        {
            for(int j = 0;j<size_2-1;j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                    return false;
            }
        }
        return true;
    }
};