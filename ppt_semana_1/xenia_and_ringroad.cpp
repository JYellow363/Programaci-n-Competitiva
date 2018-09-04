#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    long long tiempo=0;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int inicio=1;
    for(int i=0;i<m;i++){
        if(inicio<a[i]) tiempo+=a[i]-inicio;
        if(inicio>a[i]) tiempo+=n-(inicio-a[i]);
        inicio=a[i];
    }
    cout<<tiempo;
    return 0;
}