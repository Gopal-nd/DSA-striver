

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Node class represents a
// node in a linked list
class Node {
public:
    // Data stored in the node
    int data;   
    
    // Pointer to the next node in the list
    Node* next;      

    // Constructor with both data and
    // next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as a
    // parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};



Node* zeronetwo(Node* head) {
  
  if(head ==NULL||head->next==NULL){
    return head;
  }
  
  Node* zeroHead = new Node(-1);
  Node* oneHead = new Node(-1);
  Node* twoHead = new Node(-1);
  
  Node* zero = zeroHead;
  Node* one = oneHead;
  Node*  two = twoHead;

  Node* temp = head;
  while (temp!=NULL) {
   if(temp->data==0){
      zero->next=temp;
      zero = temp;
    }else if (temp->data ==1) {
      
      one->next= temp;
      one=temp;

    }
    else {
      two->next = temp;
      two=temp;
    }
    temp=temp->next;
  }
  
  zero->next = oneHead->next ? oneHead->next : twoHead->next;
  one->next = twoHead->next ;
  two->next= NULL;
  Node* newhead = zeroHead->next;
  return newhead;
}

// Function to print the linked list
void printLinkedList(Node* head) {
  Node* temp = head;
  while(temp!=NULL){
    cout << temp->data;
    temp = temp->next;
  }
  cout << endl;
 }

int main() {
    // Create a linked list with
    // values 1, 3, 2, and 4
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    
    head->next->next->next->next = new Node(0);

    head->next->next->next->next->next = new Node(2);

    head->next->next->next->next->next->next = new Node(1);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
    head = zeronetwo(head);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}


