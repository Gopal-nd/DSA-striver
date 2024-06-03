#include <bits/stdc++.h>
using namespace std;

/// @brief 
/// @return

void print(int n){
for(int i=0;i<n;i++){
        for(int j=0 ;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}
void print2(int n){
for(int i=0;i<n;i++){
        for(int j=0 ;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}
void print3(int n){
for(int i=0;i<n;i++){
        for(int j=1 ;j<=i;j++){
      
            cout << j;
            
        }
        cout << endl;
    }
    
}
void print4(int n){
for(int i=0;i<n;i++){
        for(int j=0 ;j<=i+1;j++){
      
            cout << i;
            
        }
        cout << endl;
    }
    
}
void print5(int n){
for(int i=0;i<=n;i++){
        for(int j=n-i ;j>0;j--){
      
            cout << "* ";
            
        }
        cout << endl;
    }
    
}
void print6(int n){
for(int i=0;i<n;i++){
        for(int j=n-i ;j>0;j--){
      
            cout << j;
            
        }
        cout << endl;
    }
    
}

// 1,3 ,5,7,  9,

void print7(int n){
for(int i=0;i<n;i++){
   // space 
   for (int j=0;j<n-i-1;j++){
    cout<<" ";
   }

   //satar
for(int j=0;j<2*i+1;j++){
    cout << "*";
}
   // space
   for (int j=0;j<n-i-1;j++){
    cout<<" ";

   }
   cout << endl;
}
}

void print8(int n){
for(int i=0;i<n;i++){
   // space 
   for (int j=0;j<n-i-1;j++){
    cout<<" ";
   }

   //satar
for(int j=0;j<2*i+1;j++){
    cout << "*";
}
   // space
   for (int j=0;j<n-i-1;j++){
    cout<<" ";

   }
   cout << endl;
}
}
void print9(int n){
for(int i=0;i<n;i++){
   // space 
   for (int j=0;j<i;j++){
    cout<<" ";
   }

   //satar
for(int j=0;j<((2*n)-(2*i+1));j++){
    cout << "*";
}
   // space
   for (int j=0;j<i;j++){
    cout<<" ";

   }
   cout << endl;
}
}
void print10(int n ){
for(int i=1;i<=n*2-1;i++){
   int star = i;
   if(i>n) star = 2*n -i;
   for (int j=1;j<=star;j++){
    cout<<"*";
   }
   cout << endl;

}
}
void print11(int n ){
for(int i=1;i<=n*2-1;i++){
   int star = i;
   if(i>n) star = 2*n -i;
   for (int j=1;j<=star;j++){
    cout<<"*";
   }
   cout << endl;

}
}
void print12(int n ){
    int star =1;
for(int i=0;i<n;i++){
    if (i%2==0) star =1;
    else  star =0;
    for (int j=0;j<=i;j++){
        cout << star;
        star =1-star;
    }

cout << endl;
}
}
void print13(int n ){
    // 1      1
    // 12    21
    // 123  321
    // 12344321
    // int star =1;
for(int i=1;i<=n;i++){
   //number
   for(int j =1;j<=i;j++){
    cout << j;
   }

//    /_SPACE
   for(int j=1;j<=2*(n-i);j++){
    cout << " ";
   }

//number

   for(int j =i;j>=1;j--){
    cout << j;
   }
cout << endl;

}
}

void pattren15(int n){
    int m =1;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout << m<<" ";
        m++;
    }
    cout << endl;

}
}
void pattren16(int n){
    // char m[] =['a','b',c','d','e'];
for(int i=0;i<n;i++){
    for(char ch ='A';ch<='A'+i;ch++){
       cout << ch << " ";
    }
    cout << endl;

}
}
void pattren17(int n){
    // char m[] =['a','b',c','d','e'];
for(int i=0;i<n;i++){
    for(char ch ='A';ch<='A'+(n-i-1);ch++){
       cout << ch << " ";
    }
    cout << endl;

}
}
void pat18(int n){
    for (int i =0;i<n;i++){
        char ch = 'A'+i;
        for (int j=0;j<=i;j++){
            cout <<ch;
        }
        cout <<endl;
    }
}
void pat19(int n){


  for(int i=0;i<n;i++){
   // space 
   for (int j=0;j<n-i-1;j++){
    cout<<" ";
   }

   //satar
    char ch ='A';
    int breakpoint = (2*i+1)/2;
for(int j=1;j<=2*i+1;j++){
    cout << ch;
    if(j<=breakpoint) ch++;
    else ch--;
}
   // space
   for (int j=0;j<n-i-1;j++){
    cout<<" ";

   }
   cout << endl;
}
}

void pat20(int n){
    for (int i=0;i<n;i++){
       
        for(  char ch = 'E'-i;ch<='E';ch++){

            cout << ch <<" ";
        }
        cout <<endl;
    }
    
    }
int main(){
    int test=2;
    
    for(int i =0;i<test;i++){
        int n;
        n=4;
        // print(n);
        // print2(n);
        // print3(n);
        // print4(n);
        // print5(n);
        // print6(n);
        // print7(n);
        // cout << endl;
        // print9(n);
        // print8(n);
        // print9(n);
        // print10(n);
        // print11(n);
        // print12(n);

        // print13(n);
        // pattren15(n);
        // pattren16(n);
        // cout << endl;
        pattren17(n);
        pat18(n);
        pat19(n);
        pat20(n);
    }
    return 0;
}