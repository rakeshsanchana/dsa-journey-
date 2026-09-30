#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int val=abs(n*m);
        if(val%2==0) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
   return 0;
}
