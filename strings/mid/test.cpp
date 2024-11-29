#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

// Function to count substrings with exactly k unique characters (Brute Force approach)
int countKUniqueBruteForce(string s) {
     int n = s.length();

    // Generate all possible substrings
    for (int i = 0; i < n; i++) {
                
               for (int j = i; j < n; j++) {
           cout << s.substr(i,j-i+1)<<endl;
    }
    }

    return 1;
}

int main() {
    string s;
    

    cout << "Input: ";
    cin>>s;
    int result = countKUniqueBruteForce(s);


    return 0;
}

