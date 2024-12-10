#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to convert postfix to prefix
string postfixToPrefix(string postfix) {
    stack<string> st;

    // Traverse the postfix expression
    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];

        if (isalnum(c)) { // If operand, push it to the stack
            st.push(string(1, c));
        } else if (isOperator(c)) { // If operator, pop two operands
            string operand2 = st.top(); st.pop();
            string operand1 = st.top(); st.pop();

            // Form the new prefix expression
            string prefix = c + operand1 + operand2;

            // Push the result back to the stack
            st.push(prefix);
        }
    }

    // The final prefix expression is on top of the stack
    return st.top();
}

int main() {
    string postfix = "AB+C*";
    cout << "Postfix: " << postfix << endl;
    string prefix = postfixToPrefix(postfix);
    cout << "Prefix: " << prefix << endl;

    return 0;
}

