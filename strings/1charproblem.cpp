#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char word[] = "Hello, wOrld!";
  int vowel =0;
  int consonents = 0;

  for(int i=0;i<strlen(word);i++){
 if(word[i]>='a'&&word[i]<='z'|| word[i]>='A'&&word[i]<='Z'+32){
    if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
      vowel++;
    }else {
      
      consonents++;
      
    }
    }
  }
  cout << vowel << "consonet " << consonents<<endl;
}
