#include<bits/stdc++.h>
using namespace std;

pair<string,int> substringFunction(string &s){
  unordered_map<char,int> hash;
  int start =0;
  int maxStart =0;
  int maxLength =0;

  for (int end = 0; end< s.size(); end++) {
   char current = s[end];

    if(hash.find(current)!=hash.end() && hash[current]>=start){
      start = hash[current]+1;
    }
    hash[current]=end;
    if(end-start+1>maxLength){
      maxLength = end-start+1;
      maxStart = start;
    }
  }
  string str = s.substr(maxStart,maxLength);
  return {str,maxLength};
}

int main(){
string s;
  cout << "enter the string to check the longest substring : ";
  cin>>s;
  
  pair<string,int> ans = substringFunction(s);
  
  cout << "the longest substring = " << ans.first << " and the lenght is : " <<ans.second<<endl;
  return 0;

}
