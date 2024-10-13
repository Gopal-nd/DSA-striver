#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;

    //pre computaition
    int hash[256]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c; //char
        cin>>c;
        cout<<hash[c]<<endl;
    }

  return 0;
}
