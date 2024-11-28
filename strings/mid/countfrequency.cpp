#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void countCharacterFrequency(const string &str) {
    unordered_map<char, int> freq;

  for(auto c:str){
    freq[c]++;
  }
  for(auto f:freq){
    cout << "char:"<<f.first<<" = "<<f.second<<endl;
  }

  }

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    countCharacterFrequency(str);

    return 0;
}

