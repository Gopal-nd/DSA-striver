#include <iostream>
#include <string>
using namespace std;

void stringClassExample() {
    string str = "Hello, World!"; // Declare a string

    // 1. Length of the string
    cout << "Length: " << str.length() << endl;

    // 2. Access a substring
    string super = str.substr(0, 5);
  cout << super<<endl;

    // 3. Find a character or substring
    cout << "Position of 'World': " << str.find("World") << endl;

    // 4. Replace part of the string
    str.replace(7, 5, "Universe"); // Replace "World" with "Universe"
    cout << "After Replacement: " << str << endl;

    // 5. Erase part of the string
    str.erase(5, 3); // Remove 3 characters starting from index 5
    cout << "After Erase: " << str << endl;

    // 6. Append to the string
  cout << str.size()<<" "<<str.capacity()<<" "<<str.length();
  cout << str.append("!!"); // Add "!!" to the end of the string
    cout << "After Append: " << str << endl;

  cout << str.size()<<" "<<str.capacity()<<" "<<str.length();
    // 7. Compare strings
    string another = "Hello, Universe!!";
    if (str == another) {
        cout << "Strings are equal!" << endl;
    } else {
        cout << "Strings are not equal!" << endl;
    }
}

int main() {
    stringClassExample();
    return 0;
}

//Length: 13
//Substring (0, 5): Hello
//Position of 'World': 7
//After Replacement: Hello, Universe!
//After Erase: HelloUniverse!
//After Append: HelloUniverse!!!
//Strings are not equal!
//
//
//string str = "hello, world!"
//str.length()
//str.substr(0,5)  strat ,end
//str.find(str) return index
//str.replace(7,3,word) startingIndex, noOflettersFromstartingIndex, word to replace
//str.erase(5,3) stratingIndex, noumberOfletters
//str.append(!!) append at last
//
