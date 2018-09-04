#include <bits/stdc++.h>
using namespace std;

#define nmax 100000

vector <int> adj[nmax];
//el tipo de dato es un vector

int main(){
    int n, m;
    int a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
    }
    
    for(int i=0;i<n;i++){
        cout<<"Nodo "<<i<<": ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}