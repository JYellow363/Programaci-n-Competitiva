#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; bool lucky=true;
  cin>>n;
  int a[n];
  string s;
  int suma1=0; int suma2=0;
  cin>>s;
  for(int i=0;i<n;i++){
    a[i]=s[i]-48;
  }
  
  for(int i=0;i<n;i++){
    if(a[i]!=4&&a[i]!=7) lucky=false;
  }
  
  n=n/2;
  for(int i=0;i<n;i++){
    suma1+=a[i];
    suma2+=a[n+i];
  }
  if(suma1!=suma2) lucky=false;
  
  if(lucky==true) cout<<"YES";
  else cout<<"NO";
  return 0;
}