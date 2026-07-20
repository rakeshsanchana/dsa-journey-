class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
        int c=grid[0].size();
        while(k>0){
            int temp=grid[r-1][c-1];
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    int next=grid[i][j];
                    grid[i][j]=temp;
                    temp=next;
                }
            }
            k--;
        }
        return grid;
    }
};
