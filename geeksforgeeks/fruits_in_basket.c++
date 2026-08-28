class Solution {
  public:
    int totalElements(vector<int> &arr) {
        unordered_map<int,int>m;
        int i=0,maxlen=INT_MIN;
        for(int j=0;j<arr.size();j++){
            m[arr[j]]++;
            while(m.size()>2){
                m[arr[i]]--;
                if(m[arr[i]]==0){
                    m.erase(arr[i]);
                }
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
    }
};
