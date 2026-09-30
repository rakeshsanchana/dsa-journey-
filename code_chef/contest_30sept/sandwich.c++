#include <bits/stdc++.h>
using namespace std;

int main() {
  int b,h,c;
  cin>>b>>h>>c;
  int count=0;
  int items=h+c;
  while(b>1 && items>0){
     b=b-2;
     items-=1;
     count++;
  }
  cout<<count;
  return 0;
}