#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t) {
 if(s.size()!=t.size())return false;

  unordered_map<char,char>hashS,hashT;

  for(int i=0;i<s.size();i++){
    if(hashS.count(s[i])&&hashS[s[i]]!=t[i]) return false;

    if(hashT.count(t[i])&&hashT[t[i]]!=s[i]) return false;

    hashS[s[i]]=t[i];
    hashT[t[i]]=s[i];
  }
    

    return true;
}

int main() {
    string s = "egg", t = "add";

    if (isIsomorphic(s, t)) {
        cout << s << " and " << t << " are isomorphic.\n";
    } else {
        cout << s << " and " << t << " are not isomorphic.\n";
    }

    return 0;
}

