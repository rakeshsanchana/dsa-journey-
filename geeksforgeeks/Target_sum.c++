class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
     unordered_map<int,int>m;
      int count=0;
      for(int i=0;i<arr.size();i++){
          int tar=target-arr[i];
          if(m.find(tar)==m.end()){
              m[arr[i]]++;
          }
          else{
               count+=m[tar];
                m[arr[i]]++;
          }
      }
         return count;
    }
};
