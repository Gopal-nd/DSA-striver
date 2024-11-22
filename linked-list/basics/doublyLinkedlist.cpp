#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node* back;

  Node(int data, Node* next = nullptr, Node* back = nullptr) {
    this->data = data;
    this->next = next;
    this->back = back;
  }
};

// Function to print the doubly linked list
void print(Node* head) {
  while (head != nullptr) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

// Function to create a doubly linked list from a vector
Node* convertdll(vector<int> arr) {
  if (arr.empty()) return nullptr; // Handle empty vector

  Node* head = new Node(arr[0]);
  Node* prev = head;

  for (int i = 1; i < arr.size(); i++) {
    Node* newnode = new Node(arr[i], nullptr, prev); // Use prev for back pointer
    prev->next = newnode;
    prev = newnode;
  }
  return head;
}

// Function to delete the head of the doubly linked list
Node* dllhead(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    delete head; // Free the memory for the single node or null head
    return nullptr;
  }

  Node* newHead = head->next;
  newHead->back = nullptr;
  delete head; // Free the old head
  return newHead;
}

// Function to delete the tail of the doubly linked list
Node* dlltile(Node* head) {
  if (head == nullptr || head->next == nullptr) {
    delete head; // Free the memory for the single node or null head
    return nullptr;
  }

  Node* temp = head;
  while (temp->next != nullptr) {
    temp = temp->next; // Traverse to the last node
  }

  Node* prev = temp->back;
  if (prev != nullptr) {
    prev->next = nullptr;
  }
  delete temp; // Free the last node
  return head;
}

Node* deleteKthElement(Node* head,int k){
  if(head == nullptr||head->next==nullptr){
    delete head;
    return nullptr;
  }
  int c =0;
  Node* temp = head;
  while (temp->next!=nullptr) {
    c++;
    if(c==k) break;
    temp = temp->next;

  }
  Node* front = temp->next;
  Node* prev = temp->back;

  if(front==nullptr && prev == nullptr){
    return nullptr;
  }else if (front == nullptr) {
    return dlltile(head);
  }else if (prev==nullptr) {
    return dllhead(head);
  }else {
    prev->next = front;
    front->back = prev;

    temp->next= nullptr;
    temp->back=nullptr;

    delete temp;
    return head;
  }
}

void deletenode(Node* temp){
  Node* prev = temp->back;
  Node* front = temp->next;

  if(front == nullptr){
    prev->next= nullptr;
    temp->back= nullptr;
    free(temp);
    return;
  }
  prev->next = front;
  front->back = prev;

  temp->next = temp->back = nullptr;
  free(temp);
}

Node* inserthead(Node* head,int n){
  Node* temp = head;
  Node* newnode =  new Node(n,head,nullptr);
  return newnode;
}

Node* inserttail(Node* head,int n){
  Node* temp = head;
  while(temp->next!= nullptr){
    temp = temp->next;
  }
  Node* prev = temp->back;
  Node* newnode = new Node(n,temp,prev);
  prev->next=newnode;
    temp->back = newnode;
  return head;
}

Node* insertKthelement(Node* head,int val,int k){
  if(k==1) return inserthead(head,val);
  Node* temp = head;
  int cnt=0;
  while (temp!=nullptr) {
   cnt++;
    if(cnt ==k) break;
    temp= temp->next;
  }

  Node* prev = temp->back;
  Node* newnode = new Node(val,temp,prev);
  prev->next= newnode;
  temp->back = newnode;
  return head;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  Node* head = convertdll(arr);
  print(head);

  // Delete the head node
  head = dllhead(head);
  print(head);

  // Delete the tail node
  head = dlltile(head);
  print(head);

  //delete the k the element
  head = deleteKthElement(head,5);
  print(head);

  //insert at the front
  head = inserthead(head,11);
  print(head);

  //insert at the tile
  head = inserttail(head,100);
  print(head);

  //insert at kth element
 head = insertKthelement(head, 7, 1);
  print(head);

  return 0;
}

