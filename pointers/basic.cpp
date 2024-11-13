#include<bits/stdc++.h>
using namespace std;

void fun(int &n){
  n = 10;
}

int main(){
  int n;
  cin>> n;
 fun(n);
  cout << n<< endl;
  cout << &n;

  int arr[] = {1,2,3,4,5};

  cout << arr<< endl; // it just print the the addresss of thr are 
  //
  cout << *arr << "will print the first index of the arr";

  // what is pointer ?
  // it is used to store the addres of a variable

  int*  ptr;
  ptr = &n;

  cout << ptr << " "<< *ptr<< endl;
  cout << *(&n) << endl;

//  int** ptr2 = &ptr;
//
//  cout << ptr2 << " "<< **ptr2<< endl;

  // * is used to derefernecd to get the value

  // NULL POINTER 
  int* np = NULL;



}
