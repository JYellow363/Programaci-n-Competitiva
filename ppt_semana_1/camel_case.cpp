#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int cont=1;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>=65&&int(s[i])<=90) cont++;
    }
    cout<<cont;
    return 0;
}