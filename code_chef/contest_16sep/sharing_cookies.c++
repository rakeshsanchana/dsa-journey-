#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	if((a+b)%2!=0) cout<<-1<<endl;
	else{
	 int ans=(a+b)/2;
	 cout<<a-ans;
	}
  return 0;
}
