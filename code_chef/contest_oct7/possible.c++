#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,y;
    cin>>n>>k>>y;
    int val=n*k;
    if(y<=val && y%k==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}