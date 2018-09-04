#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,aux;
  cin>>n;
  int a[7];

  for(int i=0;i<7;i++) cin>>a[i];
  for(int i=1;i<7;i++) a[i]+=a[i-1];

  if(n<=a[6]){
    for(int i=6;i>=0;i--){
      if(a[i]>=n) aux=i;
    }
  }
  
  else{
    int res=n%a[6];
    if(res==0) res=a[6];
    for(int i=6;i>=0;i--){
      if(a[i]>=res) aux=i;
    }
  }
  
  cout<<aux+1;
  return 0;
}