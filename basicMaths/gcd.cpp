#include<bits/stdc++.h>
using namespace std;
int gcdFinder(int a, int b){
    while(a>0 && b>0){
        if(a>b) a= a%b;
        else b = b%a;
    }
    if(a==0) return b;
    return a;
}

int main(){
    int n1,n2;
    cin>> n1>> n2;
    int gcd=1;
    cout << gcdFinder(n1,n2);
    cout << n1<< " "<< n2<< "\n";
    if(n1>n2){
        swap(n1,n2);
    }
    cout << n1<< " "<< n2;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }

    cout << "Greatest common divisor is : "<< gcd;

  return 0;
}



