class Solution {
public:
    int ans=0;
    pair<int,int>helper(TreeNode* root){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int>leftsum=helper(root->left);
        pair<int,int>rightsum=helper(root->right);
        int sum=leftsum.first+rightsum.first+root->val;
        int count=leftsum.second+rightsum.second+1;
        int avg=sum/count;
         cout<<sum<<" "<<count<<" "<<avg<<" "<<root->val<<endl;
        if(avg==root->val) {
            ans++;
        }  
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};
