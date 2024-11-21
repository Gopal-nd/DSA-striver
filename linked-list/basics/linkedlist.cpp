#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
  int data;
  Node* next;

  // Constructor to initialize the node
  Node(int data1, Node* next1 = nullptr) {
    data = data1;
    next = next1;
  }
};


//cover the linkedlist from the array

Node* convertArr2ll(int arr[], int n){
  if(n==0) return nullptr;
  
  Node* head = new Node(arr[0]);
  Node* mover = head;

  for(int i=1;i<n;i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }


  return head;   // which is pointer
}
// Function to convert an array to a linked list
int len(Node* head){
  int cnt=0;
  Node* temp = head;
  while (temp) {
   cout << temp->data;
    temp = temp->next;
    cnt++;
  }
  return cnt;
}

int main() {
  int arr[4] = {2, 5, 8, 7};

  // Test a single node creation
  Node* y = new Node(arr[0], nullptr);
  cout << "First Node data (y): " << y->data << endl;

  Node x = Node(arr[1], nullptr);
  cout << "Second Node data (x): " << x.data << endl;

  // Create linked list from array
  Node* head = convertArr2ll(arr, 4);

  // Print the linked list
  cout << "Linked list: ";
  Node* current =head;
  while(current->next!=nullptr){
    cout << current->data<< " ";
    current = current->next;
  }


  int llen = len(head);
  cout << llen;
  return 0;
}

