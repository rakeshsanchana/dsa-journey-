#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<20<<endl;
        else if(n==2) cout<<30<<endl;
        else{
        int ans=0;
            int rem=n%2;
            if(rem==1){
                ans+=20+((n-1)/2)*30;
            }
            else{
            ans+=((n)/2)*30;
            }
         cout<<ans<<endl;
        }
    }
	return 0;
}
