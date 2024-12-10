#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to convert postfix to infix
string postfixToInfix(string postfix) {
    stack<string> st;

    // Traverse the postfix expression
    for (char c : postfix) {
        if (isalnum(c)) { // If operand, push it to the stack
            st.push(string(1, c));
        } else if (isOperator(c)) { // If operator, pop two operands
            string operand2 = st.top(); st.pop();
            string operand1 = st.top(); st.pop();

            // Form the new infix expression
            string infix = "(" + operand1 + c + operand2 + ")";

            // Push the result back to the stack
            st.push(infix);
        }
    }

    // The final infix expression is on top of the stack
    return st.top();
}

int main() {
    string postfix = "AB+C*";
    cout << "Postfix: " << postfix << endl;
    string infix = postfixToInfix(postfix);
    cout << "Infix: " << infix << endl;

    return 0;
}

