#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i>n){
        return;
    }
    cout << i<< endl; // 1 to N
    print(i+1,n);
    cout << i<< endl;  // N to 1
}

int main(){
   print(1,5);
}