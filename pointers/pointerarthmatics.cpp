#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6};
  int* ptr = arr;
  cout <<*ptr;
  ptr++;
  cout << ptr << " "<<*ptr;
  ptr--;
  ptr--;

  cout << ptr << " "<<*ptr<< endl;
  cout << *(arr+2);

  return 0;
}
