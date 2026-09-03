class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int minval=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minval) minval=nums[i];
        }
        int even=0,odd=0;
        if(nums[0]%2==0){
            even+=1;
            for(int j=1;j<nums.size();j++){
                if(nums[j]%2==0) even+=1;
                else if((nums[j]-minval)%2==0){
                    even+=1;
                }
            }
        }
        else{
            odd+=1;
            for(int j=1;j<nums.size();j++){
                if(nums[j]%2!=0) odd+=1;
                else if((nums[j]-minval)%2!=0){
                    odd+=1;
                }
            }
        }
        if(nums.size()==odd || nums.size()==even){
            return true;
        }
        return false;
    }
};
