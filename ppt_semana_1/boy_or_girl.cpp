#include <bits/stdc++.h>
using namespace std;

int main() { //97 122
    int cont=0;
    string s;
    cin>>s;
    int a[125];
    for(int i=0;i<125;i++) a[i]=0;
    
    for(int i=0;i<s.size();i++){
        a[int(s[i])]++;
    }
    
    for(int i=97;i<123;i++){
        if(a[i]!=0) cont++;
    }
    
    if(cont%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}