#include<bits/stdc++.h>
using namespace std;

int precedence(char op){
  if(op == '^') return 3;
  if(op =='*'|| op=='/'|| op =='%') return 2;
  if(op =='+'||op =='-')return 1;
  return 0;
}

string infixToPostfix(string infix){
  stack<char> op;
  string postfix = "";

  for(char c:infix){
    if(isalnum(c)){
      postfix +=c;
    }else if (c=='(') {
      op.push(c);
    }else if (c ==')') {
      while (!op.empty()&&op.top()!='(') {
        postfix += op.top();
        op.pop();
      }
      op.pop();
    }else {
     while (!op.empty() &&  precedence(op.top())>=precedence(c)) {
      postfix += op.top();
        op.pop();
     } 
      op.push(c);
    }
  }
  while (!op.empty()) {
   postfix += op.top();
    op.pop();
  }

  return postfix;
}

int main(){

  string infix = "A+B*(C^D-E)";
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;

  return 0;
}
