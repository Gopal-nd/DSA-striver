#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 798243;
    int n =0;
    // while(num!= 0){
    //     int tem = num%10;
    //     cout << tem<< endl;
    //     n++;
    //     num = num/10;
    // }
    // cout << n;
int    nums = 798243;
    while(nums> 0){
        int tem = nums%10;
        n=n*10 + tem;
        nums = nums/10;
        
    }
    cout << n;



    // palindrome  reverse of number = original number
    return 0;
}



// n = 78723
//find the number length and extract them


