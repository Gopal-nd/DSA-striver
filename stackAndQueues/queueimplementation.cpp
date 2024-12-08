#include<bits/stdc++.h>
using namespace std;

class queues {
private:
  int size;
  int front;
  int rear;
  int count;
  int *qu;

public:

  queues (int size = 10){
    this->size = size;
    this->count= 0;
    this->front = 0;
    this->rear = -1;
    this->qu = new int[size];
  }

  ~queues (){
    delete[] qu;
  }
  void push(int val){
    if(isFull()){
      cout << "queue is full";
      return;
    }
    rear = (rear+1) % size;
    count++;

  }
  void pop(){
  if(isEmpty()){
      cout << " queue is empty";
      return;
    }
    front = (front+1) %size;
    count--;
  }

  int capacity(){
    return count;
  }
  int isFull(){
    return (count == size);
  }
  int isEmpty(){
    return (count ==0);

  }
  int peek(){
    if(isEmpty()){
      cout << " queue is empty";
      return 0;
    }
    return qu[front];
  }
};


int main(){
queues* qe = new queues(11);
  cout << qe->capacity();

  return 0;

}
