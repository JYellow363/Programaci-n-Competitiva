#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
vector<char> v;
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>s;
	v.clear();
    bool valid=true;
    char aux;
	for(int j=0; j<s.size(); j++){

        if(s[j]=='(' || s[j]=='[' || s[j]=='{') v.push_back(s[j]);
        
		if(s[j]==')' || s[j]==']' || s[j]=='}'){
			if(v.size()==0) valid=false;
				else{
                switch(s[j]){
                        case ')': aux='('; break;
                        case ']': aux='['; break;
                        case '}': aux='{'; break;                       
                }
                if(v.back()==aux)
                    v.pop_back();
                else valid=false;
                }
        }

	}
    
    if(v.size()!=0) valid=false;
    if(valid==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
	
}
	return 0;
}