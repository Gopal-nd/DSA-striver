#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;

  Node(int val){
    data = val;
    next =nullptr;
  }
};

class Stack {
private:
  Node* top;

public:
  Stack(){
    top = nullptr;
  }
  void push(int x){
    Node* newNode = new Node(x);
    newNode->next = top;
    top = newNode;
  }
  int pop(){
    if(isEmpty()){
      return -1;
    }
    int poppedvalue = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return poppedvalue;
  }

  int peek(){
    if(isEmpty()){
      return -1;
    }
    return top->data;
  }

  bool isEmpty(){
    return top == nullptr;
  }
  ~Stack(){
    while (!isEmpty()) {
      pop();
      
    }
  }
};

int main(){

  Stack s;
  s.push(10);
  s.push(20);

  cout << s.peek();
}
