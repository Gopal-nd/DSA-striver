#include<bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data1, Node* next1 = nullptr){
      this->data = data1;
      this->next = next1;
  }

};

void PrintLL(Node* head){
  Node* temp = head;
  while (temp!= nullptr) {
    cout << temp->data <<" ";
    temp = temp->next;
  }
 cout << endl; 
}


Node* convert(vector<int> arr){

  int n = arr.size();
  if(n==0) return 0;
  Node * head = new Node(arr[0]);

  Node* mover = head;
  for(int i=1;i<n;i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }

  return head;
}


Node* insert(int n,Node* head){
  Node* newNode = new Node(n);
  newNode->next = head;
  return newNode;
}

Node* endll(int data ,Node* head){
  Node* newNode = new Node(data);   //create new node
  if(head == nullptr) return newNode;   // if list is empty , new node become the head

  Node* temp = head;          // traverse to the end of the list
  while(temp->next != nullptr){
    temp = temp->next;
  }
  temp->next = newNode;  // link the last node to the new node
  return head;   // return the unchangesed head
}


Node* midll(int data , Node* head,int pos){
  if(pos<=1) return insert(data,head);
  Node* newNode = new Node(data);

  if(head == nullptr) return newNode;
  Node* temp = head;

  for(int i=1;i<pos-1&& temp != nullptr;i++){
    temp = temp ->next;
  }

  if(temp ==nullptr){
    cout << "position is out of the bount"<<endl;
    return head;
  }

  newNode->next= temp->next;
  temp->next = newNode;



  return head;
}

int main(){
vector <int> arr = {1,2,3,45,6};
Node* head = convert(arr);
PrintLL(head);
Node* top = insert(34,head);
PrintLL(head);
PrintLL(top);
Node* end = endll(8,top);
PrintLL(end);
Node* mid = midll(99,end,4);  // value , head , position
PrintLL(mid);
  return 0;
}
