#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode *head, *tail; // head and tail of the LinkedList

// Function to print the LinkedList
void PrintList(ListNode *head)
{
    ListNode *curr = head;
    while (curr != nullptr)
    {
        cout << curr->val << "-->";
        curr = curr->next;
    }
    cout << "null" << endl;
}

// Function for inserting a node at the end of the LinkedList
void InsertatLast(int value)
{
    ListNode *newnode = new ListNode(value);
    if (head == nullptr)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

// Function to segregate the LinkedList into odd and even indexed nodes
ListNode *SegregatetoOddEVen(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head; // Return as is for empty or single-node list
    }
ListNode* odd = head;
ListNode* even = head->next;
ListNode* evenHead = head->next;

while (even!=NULL&&even->next!=NULL) {
 odd->next = odd->next->next;
    even->next = even->next->next;

    odd= odd->next;
    even= even->next;
}
  odd->next = evenHead;

  return head;
 }

int main()
{
    InsertatLast(1);
    InsertatLast(2);
    InsertatLast(3);
    InsertatLast(4);
    InsertatLast(5);
    cout << "Initial LinkedList : " << endl;
    PrintList(head);

    ListNode *newHead = SegregatetoOddEVen(head);
    cout << "LinkedList After Segregation: " << endl;
    PrintList(newHead);

    return 0;
}

