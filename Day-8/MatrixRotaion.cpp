class Solution{
    public:
        bool findRotation(vector<vector<int>>&mat,vector<vector<int>>&target)
        {
            for(int i=0;i<4;i++)
            {
                int n=mat.size();
                for(int i=0;i<n;i++)
                    for(int j=0;j<n;j++)
                        swap(mat[i][j],mat[j][i]);
                reverse(mat.begin(),mat.end());
                if(mat==target)
                    return true;
            }
            return false;
        }
};