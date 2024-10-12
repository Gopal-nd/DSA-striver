#include<bits/stdc++.h>
using namespace std;


void f(int start,int end,int* a){
    if(start>=end){
        return;
    }
    swap(a[start],a[end]);
    f(start+1,end-1,a);
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int end =n-1;
    int start=0;
    f(start,end,a);
    

    for(int i=0;i<n;i++){
        cout << a[i]<< " ";
    }

  return 0;
}
