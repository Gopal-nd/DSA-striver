#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeKDigits(string num, int k) {
    stack<char> st;
    for (char digit : num) {
        while (!st.empty() && st.top() > digit && k > 0) {
            st.pop();
            k--;
        }
        st.push(digit);
    while (k > 0 && !st.empty()) {
        st.pop();
        k--;
    }
    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());

    // Remove leading zeros
    int i = 0;
    while (i < result.size() && result[i] == '0') {
        i++;
    }
  //num = "1432219 k=3

    result = result.substr(i);

    // If the result is empty, return "0"
    return result.empty() ? "0" : result;
}

int main() {
    string num = "1432219";
    int k = 3;
    cout << "Result: " << removeKDigits(num, k) << endl; // Output: "1219"

    num = "10200";
    k = 1;
    cout << "Result: " << removeKDigits(num, k) << endl; // Output: "200"

    num = "10";
    k = 2;
    cout << "Result: " << removeKDigits(num, k) << endl; // Output: "0"

    return 0;
}

