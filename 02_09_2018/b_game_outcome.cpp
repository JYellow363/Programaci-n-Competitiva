#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; int aux;
  cin>>n;
  vector<int> a[n];
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>aux;
      a[i].push_back(aux);
    }
  }
int cont=0;

int fila[n];
int col[n];

for(int i=0;i<n;i++){
  fila[i]=0;
  for(int j=0;j<n;j++){
    fila[i]+=a[i][j];
  }
}

for(int i=0;i<n;i++){
 col[i]=0;
  for(int j=0;j<n;j++){
    col[i]+=a[j][i];
  }
}


  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(col[j]>fila[i]) cont++;
    }
  }

cout<<cont;
  return 0;
}