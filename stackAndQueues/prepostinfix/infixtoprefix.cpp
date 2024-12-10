#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

// Function to determine precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/' || op == '%') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> operators;
    string postfix = "";

    for (char c : infix) {
        // If character is an operand, add it to the result
        if (isalnum(c)) {
            postfix += c;
        }
        // If character is '(', push it onto the stack
        else if (c == '(') {
            operators.push(c);
        }
        // If character is ')', pop until '(' is found
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove '('
        }
        // If character is an operator
        else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    // Pop remaining operators in the stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

string infixToPrefix(string infix){
  reverse(infix.begin(),infix.end());

  for(char &c:infix){
    if(c=='(') c=')';
    else if (c==')') c='(';
  }
  string ans = infixToPostfix(infix);

  reverse(ans.begin(),ans.end());
  return ans;
}

int main() {
    string infix = "A+B*(C^D-E)";
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << infixToPrefix(infix) << endl;
    return 0;
}

