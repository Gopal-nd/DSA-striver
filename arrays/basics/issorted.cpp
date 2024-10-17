#include<bits/stdc++.h>
using namespace std;

//tip <=

int main(){
     int arr[6]={1,2,3,4,5,6};
 int n = sizeof(arr)/sizeof(arr[0]);
  int count =0;
        for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            cout <<i<<"=" <<arr[i]  <<" "<< arr[(i + 1) % n]<< endl;
            count++; 
        }
        }
    

 bool issorted=true;
 cout << count<<endl;
 for(int i=0;i<n;i++){
    if(arr[i]>arr[(i+1)%n]){
        count ++;
    }

 }
cout << "\n"<<bool(count <=1);
  return 0;
}
