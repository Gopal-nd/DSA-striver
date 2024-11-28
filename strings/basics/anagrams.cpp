

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
  char word[] = "silent";
  string s = "listen";
  
  if(strlen(word)==s.size()){
    cout<<"smae length";
  }
  cout << "----------------------";

  int charcount[256] ={0};
  for(int i=0;i<strlen(word);i++){
  charcount[word[i]]++;
  charcount[s[i]]--;
  }

  for(int i=0;i<256;i++){
    if(charcount[i]!=0){
      cout<< "this is not the thing";
    }
  }
  cout <<"thsi is the thing";
  return 0;
 }

//another approch is to sort both and compare if not  return false
