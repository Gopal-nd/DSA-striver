
#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char word[] = "Hello, wOrld!";
  int f= 0;
  int b= strlen(word);

  while (f<b) {
   swap(word[f],word[b]);
    f++,b--;
  }
  cout << word <<endl;
}
