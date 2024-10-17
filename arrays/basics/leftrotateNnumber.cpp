#include<bits/stdc++.h>
using namespace std;

//left rotate n sifts

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n =10;
    int d= 6;
     d = d%n;
    int temp[10];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]= temp[i-(n-d)];
    }
    for(int i=0;i<n;i++){
    cout << arr[i]<< " ";
    }

  return 0;
}


// optimal solution is by doing them to reverse

#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n =10;
    int d= 6;
     d = d%n;
    reverse(arr,arr-d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
  return 0;
}
