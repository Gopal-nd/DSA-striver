#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int data, Node* next=nullptr){
    this->data = data;
    this->next = next;
  }
};

Node* convert(vector<int> arr){
  int n =arr.size();
  if(n==0) return nullptr;
  Node* head = new Node(arr[0]);
  Node* mover = head;

  for(int i=1;i<n;i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

void print(Node* head){
  Node* temp = head;
  while(temp!= nullptr){
    cout << temp->data<<" ";
   temp =  temp->next;
  }
  delete(temp);
  cout << endl;
}

Node* infront(int n,Node* head){
  Node* newNode = new Node(n,head);
  return newNode;
}

Node* inend(int n, Node* head){
  Node* temp = head;
  if(temp ==nullptr||temp==NULL) {
    Node* newNode = new Node(n);
    return newNode;
  }
  while (temp->next!=nullptr) {
    temp = temp->next;
  }
  Node* newnode = new Node(n);
  temp->next = newnode;
  return head;
}

Node* position(int n,int pos,Node* head){
  Node* temp = head;
  if(temp ==nullptr||temp==NULL) {
    Node* newNode = new Node(n);
    return newNode;
  }
  int c=0;
  while(temp!=nullptr){
    c++;
    if(c==pos-1){
      Node* newnode = new Node(n,temp->next);
      temp->next=newnode;
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node* numkel(int n,int pos,Node* head){
  Node* temp = head;
  if(temp ==nullptr||temp==NULL) {
    Node* newNode = new Node(n);
    return newNode;
  }
  int c=0;
  while(temp!=nullptr){
    c++;
    if(temp->next->data == pos){
      Node* newnode = new Node(n,temp->next);
      temp->next=newnode;
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node* deletefront(Node* head){
  if(head==nullptr) return nullptr;
  Node* temp = head;
  head=head->next;
  delete temp;
  return head;
}

Node* deleteend(Node* head){
  if(head==nullptr) return nullptr;
  Node* temp = head;
  while(temp->next->next!=nullptr){
    temp= temp->next;
  }
  temp->next= nullptr;

  return head;
}

Node* dellpos(Node* head,int k){
  if(head==nullptr) return nullptr;
  Node* temp = head;
  int c=0;
  Node* prev;
  while (temp!=nullptr) {
    c++;
    if(c==k){
    prev->next= prev->next->next;
      free(temp);
      break;
    }
    if(temp==nullptr){
      cout << "position" << k << "out of the bound";
      return head;
    }
    prev= temp;
    temp= temp->next;
  }
return head;
}

Node* dellposk(Node* head,int k){
  if(head==nullptr) return nullptr;
  Node* temp = head;
  int c=0;
  Node* prev;
  while (temp!=nullptr) {
    c++;
    if(temp->data==k){
    prev->next= prev->next->next;
      free(temp);
      break;
    }
    prev= temp;
    temp= temp->next;
  }
return head;
}

int main(){
vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
Node* head = convert(arr);
print(head);
Node* ifront = infront(22,head);
print(ifront);
Node* iend = inend(99,ifront);
print(iend);
Node* ipos = position(66,3,iend);
print(ipos);
Node* numb = numkel(77,7,ipos);
print(numb);
// delete 
Node* defront = deletefront(numb);
print(defront);
  Node* dend = deleteend(defront);
print(dend);
  Node* delpos= dellpos(dend,100);
print(delpos);
  Node* dkel= dellpos(delpos,1);
print(dkel);

  return 0;
}
