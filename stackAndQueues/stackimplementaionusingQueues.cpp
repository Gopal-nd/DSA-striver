/* #include<bits/stdc++.h> */
/* using namespace std; */

/* class queue { */
/* private: */
/*   int size; */
/*   int count; */
/*   int start; */
/*   int end; */
/*   int * qu; */

/* public: */
/*   queue(int size=10){ */
/*   this->size = size; */
/*     count = 0; */
/*     start = 0; */
/*     end = -1; */
/*     this->qu = new int[size]; */

/*   } */
/*   ~queue(){ */
/*     delete[] qu; */

/*   } */

/*   int isEmpty(){ */
/*     return (count ==0); */
/*   } */
/*   int isFull(){ */
/*     return (count == size); */

/*   } */
/*   int peak(){ */
/*     if(isEmpty){ */
/*       cout << "it is empty"; */
/*       return 0; */
/*     } */
/*     return qu[start]; */
/*   } */

/*   void push(int val){ */
/*     if(isFull){ */
/*       cout << " queue is full"; */
/*       return; */
/*     } */
/*     end = (end+1)%size; */
/*     qu[end] = val; */
/*     count++; */
/*   } */
/*   void pop(){ */
/*     if(isEmpty){ */
/*       cout << " Queue is empty"; */
/*       return; */
/*     } */
/*   start = (start +1)%size; */
/*   count--; */
/*   } */

/*   int capacity(){ */
/*     return count; */
/*   } */
/* }; */


/* class stack { */
/* private: */
/*   queue q; */

/* public: */
/*   stack(int size =10):q(size){} */

/*   void push(int x){ */
/*     int s = q.capacity(); */
/*     q.push(x); */
/*     for(int i=0;i<s;i++){ */
/*       q.push(q.peak()); */
/*       q.pop(); */
/*     } */
/*   } */
/*    int pop() { */
/*         if (q.isEmpty()) { */
/*             cout << "Stack is empty\n"; */
/*             return -1; // Return a sentinel value */
/*         } */
/*         int n = q.peak(); */
/*         q.pop(); */
/*         return n; */
/*     } */

/*     int top() { */
/*         if (q.isEmpty()) { */
/*             cout << "Stack is empty\n"; */
/*             return -1; // Return a sentinel value */
/*         } */
/*         return q.peak(); */
/*     } */

/*     int capacity() { */
/*         return q.capacity(); */
/*     } */
/*  }; */

/* int main(){ */
/*   stack s; */
/*   s.push(3); */
/*   s.push(9); */
/* cout <<  s.top(); */
/*   return 0; */
/* } */




// using the inbuilt queues





#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
  queue<int> q;
public:
  Stack(){}
  void push(int x){
    q.push(x);
    int n = q.size();
    for(int i=0;i<n-1;i++){
      q.push(q.front());
      q.pop();
    }
  }

  void pop(){
    if(q.empty()){
      return;
    }
    q.pop();
  }

  int top(){
    
    if(q.empty()){
      return -1;
    }
    return q.front();
  }

  int size(){
    return q.size();
  }
};



int main(){



  Stack s;
  s.push(823);

  cout << s.size();
  return 0;
}

