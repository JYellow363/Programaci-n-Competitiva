#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;

  char a=s[0];
  int cont=0;
  int viajes=0;
  
  for(int i=0;i<s.size();i++){
    if(s[i]!=a || cont==5){
        a=s[i];
        cont=0;
        viajes++;
    }
    cont++;
  }
cout<<viajes+1;
}
