#include <bits/stdc++.h>
using namespace std;

class StackImplementation {

private:
    int topIndex;  
    int capacity;  
    int *st;       

public:
    StackImplementation(int size = 10) {
        this->capacity = size;
        this->topIndex = -1;
        this->st = new int[size]; 
    }

    ~StackImplementation() {
        delete[] st;
    }

    void push(int x) {
        if (topIndex >= capacity - 1) {
            cout << "Stack overflow\n";
            return;
        }
        st[++topIndex] = x;  
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return st[topIndex];
    }

    int size() {
        return topIndex + 1;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return;
        }
        topIndex--;  
    }
};

int main() {
    StackImplementation st(100); 
    for(int i = 0; i < 99; i++) {
        st.push(i);        
    }
    cout << "Size: " << st.size() << "\n"; 
    cout << "Top: " << st.top() << "\n";   
    st.pop();                    
    cout << "Size after pop: " << st.size() << "\n"; 
    return 0;
}

