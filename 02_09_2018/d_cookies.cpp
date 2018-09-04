#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int aux[n];
    int impar=0;
    int par=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]%2==0) par++;
      else impar++;
    }
    if(impar%2!=0) cout<<impar;
    else cout<<par;
    return 0;
  
}
