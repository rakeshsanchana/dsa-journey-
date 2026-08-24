class Solution {
  public:
    int maxWater(vector<int> &arr) {
        if(arr.size()==1) return 0;
        int maxcap=INT_MIN;
        int i=0,j=arr.size()-1;
        while(i<j){
            int ht=min(arr[i],arr[j]);
            int width=j-i;
            int area=ht*width;
             maxcap=max(area,maxcap);
             if(arr[j]>arr[i]) i++;
             else j--;
        }
        return maxcap;
    }
};
