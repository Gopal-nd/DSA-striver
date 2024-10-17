#include<bits/stdc++.h>
using namespace std;

// tip  use good variable and function names
int main(){
    int arr[7]={2,1,3,4,5,7,6};
    int n =7;
    int largest = arr[0];
    int second = -1;
    int smallest = arr[0];
    int secondSmallest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
            second = arr[i];
        }
    }
    cout << second << endl;
    // secons smallest
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondSmallest= smallest;
            smallest=arr[i];
        }else if(arr[i]<secondSmallest && arr[i]!=smallest){
            secondSmallest=arr[i];
        }
    }
    cout << secondSmallest << endl;
  return 0;
}
