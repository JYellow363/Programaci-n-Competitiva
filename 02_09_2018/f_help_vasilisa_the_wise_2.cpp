#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1,r2,c1,c2,d1,d2;
    int b,c,d;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int a=9;
    bool aux=false;
    
    while(a>0){
        b=r1-a;
        c=c1-a;
        d=d1-a;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d&&
        b<10&&c<10&&d<10&&b>0&&c>0&&d>0){
            if(c1+d1-2*a==r2&&c1+r1-2*a==d2&&r1+d1-2*a==c2){
                aux=true; break;
            }
        }
        a--;
    }
    
    if(aux==true) cout<<a<<" "<<b<<endl<<c<<" "<<d;
    else cout<<"-1";
    
    return 0;
}