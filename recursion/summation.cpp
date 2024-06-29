#include <bits/stdc++.h>
using namespace std;


// sum of n numbers using 
//1. parameter 
//2. functional

void parameter(int n,int sum=0){
    if(1>n){
        cout << sum;
        return;
    }
    // cout << i<< endl; // 1 to N
    parameter(n-1,sum+n);
    // cout << i<< endl;  // N to 1
}

int functional(int n){
    if(n==1){
        return 1;
    }
    return n*functional(n-1);
}

void swap(int arr[], int i, int j){
while (i<j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
}

}

void print( int arr[],int n){
for(int i=0;i<n;i++){
    cout << arr[i]<< " ";
}
cout << endl;
}


void swaprecurssion(int l ,int r){
    if(l>=r){
        return;
    }
    // swap()
    swaprecurssion(l+1,r-1);
}

int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
// swap(arr,0,n-1);
print(arr,n);

swaprecurssion(0,n-1);
print(arr,n);
}