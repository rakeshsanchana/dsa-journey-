class Solution {
public:
    bool helper(int left,int right,int player1,int player2,vector<int>& nums,bool turn){
        if(left>right) {
            if(player1>=player2) return true;
            else return false;
        }
        if(turn){
            return helper(left+1,right,player1+nums[left],player2,nums,false ) || 
            helper(left,right-1,player1+nums[right],player2,nums,false);
        }
           return  helper(left+1,right,player1,player2+nums[left],nums,true) &&
            helper(left,right-1,player1,player2+nums[right],nums,true); 

    }
    bool predictTheWinner(vector<int>& nums) {
        return helper(0,nums.size()-1,0,0,nums,true);
    }
};
