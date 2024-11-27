


#include<iostream>
#include<cstring>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
  unordered_map<char,int> hash;
  string s = "listen";
  for(int i=0;i<s.size();i++){
    if(hash[s[i]]>0){
      cout << s[i];
    }
    hash[s[i]]++;
  }
 
cout << "Note there";

  return 0;
 }

//another approch is to sort both and compare if not  return false
