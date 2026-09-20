class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        vector<int>a;
        vector<int>b;
        long long count=0;
        for(int i=0;i<intervals.size();i++){
            a.push_back(intervals[i][0]);
            b.push_back(intervals[i][1]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        while(i<a.size()){
            while(j<a.size() && b[j]<a[i]){
                j++;
            }
             count+=i-j;
            i++;
        }
        return count;
    }
};