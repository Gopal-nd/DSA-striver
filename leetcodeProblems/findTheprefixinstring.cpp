#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    
    int index =1;
    string word = "";
    for(auto ch:sentence){
      if(ch==' '){
        
        if(word.find(searchWord)==0){
          return index;
        }
        word = "";
        index++;
      }else {
        word+=ch;
      }
    }
    
        if(word.find(searchWord)==0){
          return index;
        }
    return -1;
  }
};

int main() {
    Solution solution;
    string sentence = "i love eating burger";
    string searchWord = "burg";

    int result = solution.isPrefixOfWord(sentence, searchWord);
    cout << "Result: " << result << endl;

    return 0;
}

