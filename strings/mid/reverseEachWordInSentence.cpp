
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

string countCharacterFrequency( string str) {
  
  stringstream ss(str);
  string word ,ans;

  while (ss>>word) {
   ans += word+" "; 
  }
  ans.pop_back();
  return ans;
  

  }

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin,str);

   string reversedIs= countCharacterFrequency(str);
    cout << "reversed senteence is : " << reversedIs;

    return 0;
}


