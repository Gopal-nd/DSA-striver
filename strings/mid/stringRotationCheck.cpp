#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    string res = s1+s1;
    if(res.find(s2)!=string::npos){
    return true;
    }
 
  return false;
}

int main() {
    string s1 = "waterbottle", s2 = "erbottlewat";
    if (isRotation(s1, s2)) {
        cout << "Strings are rotations of each other." << endl;
    } else {
        cout << "Strings are not rotations of each other." << endl;
    }
    return 0;
}

