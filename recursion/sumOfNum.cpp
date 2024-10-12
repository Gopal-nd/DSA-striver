#include<bits/stdc++.h>
using namespace std;

int sumOf(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return n+sumOf(n-1);
}

int main(){
    int n;
    n=sumOf(3);
    cout<<n;

  return 0;
}
