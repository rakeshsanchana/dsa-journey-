class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<int>pir;
            for(int j=n-1;j>=0;j--){
                pir.push_back(matrix[j][i]);
            }
            ans.push_back(pir);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[i][j];
            }
        }
    }
};
