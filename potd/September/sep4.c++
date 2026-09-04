class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxval=INT_MIN,minval=INT_MAX;
        for(int i=0;i<nums.size();i++){
        maxval=*max_element(nums.begin(),nums.begin()+i);
        minval=*min_element(nums.begin()+i,nums.end());
        cout<<maxval<<" "<<minval<<endl;
        if(maxval-minval<=k){
            return i;
        }
        }
        return -1;
    }
};
