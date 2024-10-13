#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    unordered_map<char,int> hash;
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
   for(auto it:hash){
       cout<<it.first<<"="<<it.second<<endl;
   }

  return 0;
}
