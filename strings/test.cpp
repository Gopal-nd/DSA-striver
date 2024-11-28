#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void charFrequency(const string &str) {
    unordered_map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }

    cout << "Character Frequencies:" << endl;
    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string str;
    cin>>str;
    charFrequency(str);
    return 0;
}

