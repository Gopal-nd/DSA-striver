#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n* factorial(n-1);
}

int main(){
    int n = factorial(5);
    cout << n;


  return 0;
}
