#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data, Node* next){
    this->data = data;
    this->next = next;
  }

  Node(int data){
    this->data = data;
    this->next=nullptr;
  }


};

Node* findMidd(Node* head){
  Node* temp = head;
  int c =0;

  if(head==NULL||head->next==NULL){
    return head;
  }
  while(temp!=NULL){
    c++;
    temp = temp->next;
  }
  int mid = c/2+1;
  temp = head;
  while (temp!=NULL) {
    mid = mid-1;
    if(mid==0){
      break;
    }
    temp = temp->next;
  }
  return temp;
}

Node* findMid(Node* head){
  Node* slow  = head;
  Node* fast  = head;
  while (fast!=NULL && fast->next!=NULL) {
   slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}


int main(){
Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

  Node* ans = findMid(head);
  cout << ans->data;

  return 0;
}
