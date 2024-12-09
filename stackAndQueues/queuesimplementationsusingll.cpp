#include<bits/stdc++.h>
using namespace std;

struct Node {
public:
  int data;
  Node* next;

  Node(int val){
    this->data = val;
    next = nullptr;
  }
};

class Q {
private:
  Node* front;
  Node* rear;

public:
  Q(){
    front = nullptr;
    rear = nullptr;
  }

  void push(int x){
    Node* newNode = new Node(x);
    if(rear == nullptr){
      front = rear = newNode;
      return;
    }
    rear->next = newNode;
    rear  = newNode;
  }

  int pop(){
   if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // Return -1 if the queue is empty
        }
    int popedvalue = front->data;
    Node* temp = front;
    front = front->next;

    if(front == nullptr){
      rear = nullptr;
    }
    delete temp;
    return popedvalue;
  }
   int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // Return -1 if the queue is empty
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};


int main(){
Q q;

  q.push(10);
  q.push(31);
  q.push(99);

  cout << q.peek();

  return 0;
}
