class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int st=nums[0];
        int end=nums[nums.size()-1];
        while(st<end){
             bool flag=false;
         for (int i=0;i<nums.size();i++){
            if(nums[i]==st){
               flag=true; 
               break;
            } 
         }
            if(flag==false) ans.push_back(st);
            st++;
        }
         return ans;
    }
};
