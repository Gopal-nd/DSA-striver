# linked list

## what is linked list

it store data in continouse location the size can be increased in dynamic way

they will store in the head memory

each elment + next element addres

starting point is called HEAD elemets end is called TAIL ant it will point to
null

## where is used

in stacks , and que

reallife browser

## structs and classes

creating the class for thhis

```cpp
class Node{
public:  // access modidier
    int data ;
    Node* next;

    // constructor
    Node(int data1, Node* next1=nullptr){
    data = data1;
    next = next1;
    }

    Node(int data1){
        data = data1;
        next= nullptr;
    }
};

int main(){
    vector<int> arr={2,5,8,7};
    Node* y = new Node(arr[0]);   // new keyword will return the location of the object
    cout << y<< "\n"; // return the memory value
    cout << y->data<<"\n";
}
```

`int n =2` `int* y = &x` `cout << y`

struct
`struct node{
int data;
node* next;
node(data1,next1){
data = data1;
next = next1;
}
}`

## memory

it store data and location of next address

A linked list is a linear data structure where each element (node) contains a
value and a reference (or pointer) to the next node in the sequence. It allows
efficient insertions and deletions at both ends but requires traversal to access
elements at arbitrary positions.
