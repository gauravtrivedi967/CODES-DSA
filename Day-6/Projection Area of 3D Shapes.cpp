class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int area_1=0,area_2=0,area_3=0;
        int N=grid.size();
        for(int i=0;i<N;i++)
        {
            area_1+=*(max_element(grid[i].begin(),grid[i].end()));
            vector<int>tmp;
            for (int j=0;j<N;j++)
            {
                if (grid[i][j])
                    area_2+=1;
                tmp.push_back(grid[j][i]);

            }
            area_3+=*(max_element(tmp.begin(),tmp.end()));
        }
        return area_1+area_2+area_3;

    }
};