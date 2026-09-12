class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count=0;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]].push_back(i);
            }
            else{
                m[nums[i]].push_back(i);
            }
        }
        for(auto it: m){
            if(it.second.size()>=3){
                vector<int>x=it.second;
                unordered_map<int,int>m1;
                for(int i=0;i<x.size()-1;i++){
                    int res=x[i+1]-x[i];
                    m1[res];
                }
                if(m1.size()==1) count++;
            }
        }
        return count;
    }
};