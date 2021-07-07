#include<algorithm>
using namespace std;
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int N=grid.size();
        int result=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(grid[i][j])
                {  
                    result+=grid[i][j]*4+2;
                }
                if (i)
                    
                    result-=min(grid[i-1][j],grid[i][j])*2;
                if(j)
                    result-=min(grid[i][j-1],grid[i][j])*2;  
            }
        }
        return result;
    }
};
