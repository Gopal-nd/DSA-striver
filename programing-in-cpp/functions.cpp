#include<bits/stdc++.h>
using namespace std;


// use '&' in function parameter to use by value
// arr[] will always pass by value

// types of functions
/*
return
void
parameter
non parameter
*/
void Hi(){
    cout << "Hi";
}

void PrintName(string name){
    Hi();
    cout << name;
}

int Sum(int a,int b){
    return a+b;
}

void doNothing(int &n){
    cout << n;
    n= n+10;
    cout <<n;
    
}

int main(){
   Hi(); 
   string name;
   cin >> name;
   int sum = Sum(2,3);
   cout << sum;
   PrintName(name);
   int mini = min(1,2);   // in built functions


   //pase by value and pass by refernece
   int n = 9;
   doNothing(n);
    cout << n;
   cout << mini;

  return 0;
}
