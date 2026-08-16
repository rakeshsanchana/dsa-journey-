class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans=INT_MAX;
        int index=-1;
        for(int i=0;i<drones.size();i++){
            int val1=abs(drones[i][0]-target[0]);
            int val2=abs(drones[i][1]-target[1]);
            int sum=val1+val2;
            if(sum<ans && drones[i][2]>= sum){
                ans=sum;
                index=i;
            }
        }
        return index;
    }
};
