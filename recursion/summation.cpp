#include <bits/stdc++.h>
using namespace std;


// sum of n numbers using 
//1. parameter 
//2. functional

void parameter(int n,int sum=0){
    if(1>n){
        cout << sum;
        return;
    }
    // cout << i<< endl; // 1 to N
    parameter(n-1,sum+n);
    // cout << i<< endl;  // N to 1
}

int functional(int n){
    if(n==1){
        return 1;
    }
    return n*functional(n-1);
}

// void swap(int arr[], int i, int j){
// while (i<j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     i++;
//     j--;
// }

// }

void print( int arr[],int n){
for(int i=0;i<n;i++){
    cout << arr[i]<< " ";
}
cout << endl;
}


void swaprecurssion(int l ,int r){
    if(l>=r){
        return;
    }
    // swap()
    swaprecurssion(l+1,r-1);
}
void swapit(int arr[],int i,int n){

     if(i>=n/2)
    {
      return;  
    }
   swap(arr[i],arr[n-i-1]);
    
    swapit(arr,i+1,n);



    
}

bool palindron(string &s,int i){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
   return palindron(s,i+1);
}



int fibonacci(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int fib(int n){
    if(n<=1) return n;
    return n-1 + n-2;
}

int main(){
int arr[] = {1,2,3,4,5,6,7,8};
// int n = sizeof(arr)/sizeof(arr[0]);





// swap(arr,0,n-1);
// print(arr,n);
// swapit(arr,0,n);
string name = "gopppog"; 
cout << palindron(name,0);
// swaprecurssion(0,n-1);
// print(arr,n);
int n = 10;
int j = 0;
int k = 1;
int c;
if(n<=1){
    cout << 1;
}
for (int i=2;i<=n;
++i){
c= j+k;
j=k;
k=c;
}
//  cout << k<< endl;
cout <<fib(29);
cout << "Fibonacci number at position " << n << " is " << fibonacci(4) << endl;
}

// fibonacci numbers 




// time complexity 2^n 