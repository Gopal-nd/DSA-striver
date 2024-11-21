#include<bits/stdc++.h>
using namespace std;


class Node {
public:
  int data;
  Node* next;

  Node(int data,Node* next=nullptr){
    this->data = data;
    this->next = next;
  }
};

Node* convert(vector<int> arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;

  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}
void print(Node* head){
  Node* temp = head;
  while(temp!= nullptr){
    cout << temp->data<< " ";
    temp = temp->next;
  }
  cout << endl;
  free(temp);
}
Node* fr(Node* head){
  if( head == nullptr){
    cout << "List is empty";
    return NULL;
  }
  Node* temp = head;
  head = head->next;
  delete temp;
  return head;
}
Node* e(Node* head){
  if(head==nullptr){
    cout << " list is empty";
    return NULL;
  }
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  Node* temp = head;
  while (temp->next->next!=NULL) {
    temp = temp->next;
  }

  delete temp->next;
  temp->next = NULL;
  return head;
}


Node* pos(Node* head,int po){
  if(head==NULL){
    cout << "List is empty";
    return NULL;
  }

  if(po==1){
      return fr(head);
  }
  Node* temp=head;
  for(int i=1;i<po-1;i++){
    if(temp->next == NULL){
    cout << "Position out of bound";
      return head;
    }
    temp = temp->next;
  }

  if(temp->next == NULL){
    cout << "position out of bound";
    return head;
  }

  Node* nodetode = temp->next;
  temp->next = temp->next->next;
  delete nodetode;
  return head;
}

int main(){
vector<int> arr = {1,2,3,4,5,6,7};
Node* head = convert(arr);
print(head);
Node* f= fr(head);
  print(f);
Node* en = e(f);
  print(en);
Node* midd = pos(en,3);
  print(midd);

  return 0;
}



