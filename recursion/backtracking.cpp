#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0) return;
    // herer to 1 to n
    cout << n<<endl;
    print(n-1);  // here to n  to 1

}

int main(){
    int n=7;
    print(n);
  return 0;
}
