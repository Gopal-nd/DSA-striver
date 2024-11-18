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

// Function to convert an array to a linked list
Node* convertArr2ll(int arr[], int n) {
  if (n == 0) return nullptr; // Handle empty array case
  
  Node* head = new Node(arr[0]); // Create the head node
  Node* mover = head;

  for (int i = 1; i < n; i++) {
    Node* temp = new Node(arr[i]); // Create a new node
    mover->next = temp;            // Link the new node
    mover = temp;                  // Move to the next node
  }

  return head;
}

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
  Node* current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
int llen = len(head);
  cout << llen;
  return 0;
}

