#include<bits/stdc++.h>
using namespace std;


int main(){
    //extraction of digits
    int n ;
    cout << "enter the n Number : ";
    cin >> n;
    int orginal =n;
    int reverse=0;
    int number=0;
    while (n>0)
    {
        int num = n%10;
        cout<< num << " ";
        if((reverse > INT_MAX/10)|| (reverse==INT_MAX/10)){
            return 0;
        }
        reverse = reverse*10+num;
        number++;
        n= n/10;
    }
    cout << "\n reversed no: " << reverse;
    cout << "\n original num: "<<orginal;
    cout<< "\n numbers lenght: "<<number;
    if(orginal==reverse){
        cout << "\n It is palindrome";
    }else{
        cout << "\n Not a palindrome number";
    }

  return 0;
}
