#include<bits/stdc++.h>
using namespace std;

class MyQueue {
private:
  stack<int> s;

public:
  MyQueue(){}

  void push(int x){
    s.push(x);
  }

  int pop(){
  if(s.empty()){
      return -1;
    }
    int element = s.top();
    s.pop();
    if(s.empty()){
      return element;
    }
    int last = pop();
    s.push(element);
    return last;
  }
  int peek(){
 if(s.empty()){
      return -1;
    }
    int element = s.top();
    s.pop();
    if(s.empty()){
      s.push(element);
      return element;
    }
    int last = peek();
    s.push(element);
    return last;

  }

  bool empty(){
    return s.empty();
  }

};


int main(){

  MyQueue q;
    q.push(1);
    q.push(2);
    cout << q.peek() << endl;  // Outputs: 1
    cout << q.pop() << endl;   // Outputs: 1
    cout << q.empty() << endl; // Outputs: 0 (false)
    return 0;
}

