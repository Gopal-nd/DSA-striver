#include <iostream>
#include <string>
#include <algorithm>
#include<unordered_map>
using namespace std;

bool areAnagrams1(string s1, string s2) {
   sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  return s1==s2;
}

bool areAnagrams(string s1, string s2) {
 if(s1.size()!=s2.size()){
    return false;
  }

  unordered_map<char,int> hash;
  
  int n = s1.size();
  for(int i=0;i<n;i++){
    hash[s1[i]]++;
  }
    for(int i=0;i<n;i++){
    hash[s1[i]]--;
  }
  for( auto i:hash){
    if(i.second!=0){
      return false;
    }
  }
  return true;


}


int main() {
    string s1 = "listen", s2 = "silentww";
    if (areAnagrams(s1, s2)) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }
    return 0;
}

