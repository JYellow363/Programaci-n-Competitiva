#include <bits/stdc++.h>
using namespace std;

string s;

void ss(int aux, int n){
    if(s.size()<=n){
        if(aux==97) s.push_back(char(aux));
        else{
            ss(aux-1, n);
            s.push_back(char(aux));
            ss(aux-1, n);
        }
    }
}

int main(){
    int n;
    cin>>n;
    ss(122, n);
    cout<<s[n-1]<<endl;

    return 0;
}