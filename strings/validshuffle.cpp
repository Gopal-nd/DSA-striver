

#include<bits/stdc++.h>
using namespace std;

bool substringFunction1(string &s,string ss,string mainString){
  if(s.size()+ss.size()!=mainString.size()){
    return false;
  }
  // implementing two pointer approche
  int i=0,j=0;

  for(char c:mainString){
    if(i<s.size() && s[i]==c){
      i++;
    }else if (j<ss.size()&& ss[j]==c) {
     j++; 
    }else {
      return false;
    }
  }
   return true;
}

bool substringFunction2(string &s,string &ss,string m){
  if(s.size()+ss.size()!=m.size()){
    return false;
  }
  // implementing sorting
  int i=0,j=0;
string com = s+ss;
 sort(com.begin(),com.end());
  sort(m.begin(),m.end());
  if(com==m){
    return true;
  }else {
    return false;
  }

   return true;
}

bool substringFunction(string &s,string &ss,string m){
  if(s.size()+ss.size()!=m.size()){
    return false;
  }
  // using the hash map
  unordered_map<char,int> hash;
  for(char c:s) hash[c]++;
  for(char c:ss) hash[c]++;

  for(char c:m){
    if(hash[c]==0){
      return false;
    }
    hash[c]--;
  }

  for(auto it :hash){
    if(it.second!=0){
      return false;
    }
  }
    return true;

}
int main(){
string s,target,mainstring;
  cout << "enter the string 1 : ",mainstring;
  cin>>s;
  cout << "\n enter the  string 2 : ";
  cin>>target;
  cout << "\n enter the main string ";
  cin>> mainstring;
  bool ans = substringFunction(s,target,mainstring);
  
  cout << "the nuberof occurencess = " << ans;
  return 0;

}
