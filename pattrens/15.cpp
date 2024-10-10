#include<bits/stdc++.h>
using namespace std;

// ABCDE
// ABCD
// ABC
// AB
// A
int main(){
    int n =5;
    for(int i=0;i<n;i++){
        for(char j = 'A';j<='A'+(n-i-1);j++){
            cout << j;
        }cout << endl;
    }

  return 0;
}
