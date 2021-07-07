class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int  m=A.size();
        int n=A[0].size();
        vector<vector<int>> result(n,vector<int>(m,0));
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<m;i++)
            {
                result[j][i]=A[i][j];
            }
                
        }
       return result; 
    }
};
