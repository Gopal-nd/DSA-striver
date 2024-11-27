
#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char word[] = "Hello, wOrld!";
  for(int i=0;i<strlen(word);i++){
    if(isdigit(word[i])){
      cout << "present";
    }
  }
  cout << "string";
}
