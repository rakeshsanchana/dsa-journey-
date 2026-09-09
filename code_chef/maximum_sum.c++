#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int maxans=0,currsum=0;
        int size=n-k;
        for(int i=0;i<size;i++){
            currsum+=ans[i];
        }
        maxans=currsum;
        for(int i=size;i<ans.size();i++){
            currsum=currsum+ans[i]-ans[i-size];
            maxans=max(maxans,currsum);
        }
        cout<<maxans<<endl;
    }
	return 0;
}
