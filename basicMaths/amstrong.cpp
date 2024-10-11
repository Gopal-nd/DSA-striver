#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int sum=0;
    cin>> n;
    int original=n;
    int k = to_string(n).length();
    while(n>0){
        int num = n%10;

        sum +=pow(num,k);
        n/=10;
    }
    if(original==sum){
        cout << "amstrong";
    }else{
        cout << "not";
    }

  return 0;
}
