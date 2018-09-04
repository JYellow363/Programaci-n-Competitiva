#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    int hj=0;
    int lj=0;
    cin>>casos;
    for(int i=0;i<casos;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(j!=0){
                if(a[j]>a[j-1]) hj++;
                if(a[j]<a[j-1]) lj++;
            }
        }
        cout<<"Case "<<i+1<<": "<<hj<<" "<<lj<<endl;
        hj=0; lj=0;
    }
    
    return 0;
}