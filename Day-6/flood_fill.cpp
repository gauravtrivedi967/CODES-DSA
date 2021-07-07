class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int ori_color=image[sr][sc];
        if (ori_color!=newColor)
            dfs(sr,sc,image,ori_color,newColor);
        return image;
    
    }
    void dfs(int r,int c,vector<vector<int>>&images,int ori_color,int newColor)
    {
        vector<vector<int>> directions={{0,1},{0,-1},{1,0},{-1,0}};
        int rows=images.size();
        int cols=images[0].size();
        if (r>=rows ||r<0 ||c>=cols ||c<0 or images[r][c]!=ori_color)
            return;
        images[r][c]=newColor;
        for(auto direction:directions)
            dfs(r+direction[0],c+direction[1],images,ori_color,newColor);
    }
};
