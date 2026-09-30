#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> values(m);

        for(int i=0;i<m;i++){
            cin >> values[i];
        }

        sort(values.begin(),values.end());

        vector<int>v(n+1,0);

        int i=1,j=0;

        while(j<values.size()){
            if(values[j]==i){
                v[i]=1;
                j++;
            }
            i++;
        }

        i=1;

        while(k>0){
            if(v[i]==0){
                cout << i << " ";
                k--;
            }
            i++;
        }

        cout << endl;
    }

    return 0;
}