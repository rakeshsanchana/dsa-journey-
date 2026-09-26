class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long  val=0,res=0;
       for(int i=0;i<source.size();i++){
           res+=source[i];
       }
        for(long j:target){
            val+=j;
        }
        if(val==res) return true;
        return false;
    }
};