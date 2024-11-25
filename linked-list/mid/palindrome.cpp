#include <bits/stdc++.h>
using namespace std;

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

Node* reverseLinkedList(Node* head){
  if(head==NULL||head->next==NULL) return head;
  Node* newHead = reverseLinkedList(head->next);
  Node* front = head->next;
  front->next = head;
  head->next = NULL;
  return newHead;
}

bool isPalindrome(Node* head) {
    // Check if the linked list is empty
    // or has only one node
    if (head == NULL || head->next == NULL) {
        
         // It's a palindrome by definition
        return true; 
    }
  Node* slow = head;
  Node* fast = head;

  while (fast->next!=NULL && fast->next->next!=NULL) {
    slow= slow->next;
    fast= fast->next->next;

  }
  Node* newHead = reverseLinkedList(slow->next);
  Node* first = head;

  Node* second = newHead;
  while (second!=NULL) {
  if (first->data!=second->data) {
    reverseLinkedList(newHead);
      return false;
  }  
    first = first->next;
    second = second->next;
  }
  reverseLinkedList(newHead);
  return true;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with
    // values 1, 5, 2, 5, and 1 (15251, a palindrome)
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}

