#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      int ans=k-n;
      if(ans>0){
       cout<<ans*2<<endl;   
      }
      else{
          cout<<0<<endl;
      }
  }
  return 0;
}
