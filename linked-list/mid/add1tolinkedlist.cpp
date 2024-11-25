//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to reverse a linked list
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node* addOne(Node* head) {
        // Reverse the linked list
        head = reverse(head);

        // Traverse the reversed list and add 1
        Node* curr = head;
        int carry = 1;
        while (curr && carry > 0) {
            int sum = curr->data + carry;
            curr->data = sum % 10;  // Update the current node value
            carry = sum / 10;       // Calculate the carry

            if (carry > 0 && curr->next == NULL) {
                // If carry remains and it's the last node, add a new node
                curr->next = new Node(carry);
                carry = 0; // Clear the carry since we added the new node
            }

            curr = curr->next;
        }

        // Reverse the list back to its original order
        return reverse(head);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t; // Number of test cases
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire input line
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        // Create the linked list from the input array
        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        // Call the function and print the updated list
        Solution ob;
        head = ob.addOne(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends

