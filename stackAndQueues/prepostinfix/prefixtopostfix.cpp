#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string prefixToPostfix(string prefix) {
    stack<string> st;

    // Traverse the prefix expression in reverse order
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isalnum(c)) { // If operand, push to stack
            st.push(string(1, c));
        } else if (isOperator(c)) { // If operator, pop two operands
            string operand1 = st.top(); st.pop();
            string operand2 = st.top(); st.pop();

            // Form the new postfix expression
            string postfix = operand1+ operand2 + c;

            // Push the result back to the stack
            st.push(postfix);
        }
    }

    // The final postfix expression is on top of the stack
    return st.top();
}

int main() {
    string prefix = "*-A/BC-/AKL";
    cout << "Prefix: " << prefix << endl;
    string postfix = prefixToPostfix(prefix);
    cout << "Postfix: " << postfix << endl;

    return 0;
}

