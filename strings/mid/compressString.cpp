#include <iostream>
#include <string>
using namespace std;

string compressString(string s) {
    string result = "";
    int count = 1;

  for(int i=1;i<=s.size();i++){
    if(i<s.length()&&s[i]==s[i-1]){
      count++;
    }else {
      result+= s[i-1]+to_string(count);
      count=1;
    }
  }
   
  return result.length() < s.length() ? result : s;
}

int main() {
    string s = "aaabbcccccaaaaab";
    cout << "Compressed String: " << compressString(s) << endl;
    return 0;
}

