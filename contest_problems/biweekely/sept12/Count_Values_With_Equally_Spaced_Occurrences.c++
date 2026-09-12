class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans=0;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]].push_back(i);
            }
            else  m[nums[i]].push_back(i);
        }
        for(auto it:m){
            if(it.second.size()==3){
                vector<int>x=it.second;
                    if(x[1]-x[0]==x[2]-x[1]) ans++;
            }
        }
        return ans;
    }
};