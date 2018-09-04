#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int cont=0;
    cin>>n;
    int a[n];
    vector <bool> rep(n);
    vector<int> aux(n);
    
    for(int i=0;i<n;i++){ cin>>a[i]; aux[i]=i+1; rep[i]=false; }
    
    for(int i=0;i<n;i++){
        if(find(aux.begin(), aux.end(), a[i])!=aux.end()) {
            aux.erase(find(aux.begin(),aux.end(),a[i]));
        }
    }
    cout<<aux.size();
    
    return 0;    
}