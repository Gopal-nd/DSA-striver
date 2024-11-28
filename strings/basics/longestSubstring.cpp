



#include<iostream>
#include<cstring>
#include <unordered_map>
#include<string>
using namespace std;

int main(){
  string s = "abcabcbb";
  unordered_map<char,int> lastseen;
  int start =0,maxLength=0,maxStart =0;

  for(int end =0;end<s.lenght();end++){
    char currentChar = s[end];

    if(lastseen.find(currentChar)!=lastseen.end()&& lastseen[currentChar]>=start){
      start = lastseen[currentChar]+1;
    }
  }

 
  
  return 0;
 }

//another approch is to sort both and compare if not  return false
