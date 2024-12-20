#include<bits/stdc++.h>
using namespace std;


bool isOperator(char c){
  return c=='+' || c=='-'|| c=='*'||c=='/'||c=='^';
}

string prefixToInxif(string prefix){
  stack<string> st;

  for(int i=prefix.size()-1;i>=0;i--){
    char c = prefix[i];

    if(isalnum(c)){
      st.push(string(1,c));
    }else if(isOperator(c)){
      string op1 = st.top();
      st.pop();
      string op2 = st.top();
      st.pop();

      string i = "("+op1+" "+c+" "+op2+")";
      st.push(i);
    }
  }

  return st.top();
}

int main() {
    string prefix = "*-A/BC-/AKL";
    cout << "Prefix Expression: " << prefix << endl;
    cout << "Infix Expression: " << prefixToInxif(prefix) << endl;
    return 0;
}

