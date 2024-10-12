#include<bits/stdc++.h>
using namespace std;

int feb(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return feb(n-1)+feb(n-2);
}

int main(){
    int n;
    n= feb(5);
    cout << n;

  return 0;
}
