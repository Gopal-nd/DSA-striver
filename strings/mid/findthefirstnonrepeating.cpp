#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char findFirstNonRepeatingCharacter(const string &str) {
    unordered_map<char, int> freq;

  for(char c:str){
    freq[c]++;
  }
  for(char c:str){
    if(freq[c]==1){
      return c;
    }
  }
  return '\0';
  // Return null character if all characters repeat
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char result = findFirstNonRepeatingCharacter(str);
    if (result != '\0') {
        cout << "First Non-Repeating Character: " << result << endl;
    } else {
        cout << "No Non-Repeating Characters Found" << endl;
    }

    return 0;
}

