#include<bits/stdc++.h>
using namespace std;


int main(){
    string s = "SOME one";
    cout << s[1];  // every charecter is stored in index
    int len = s.size();
    cout << len<<endl;;
    for(char i=0;i<len;i++){
      cout <<"Index = "<<int(i)<<" : "<<"Value = "<< s[i] <<endl;
    }
    for(int i=0;i<256;i++){
      cout <<"INT = "<<int(i)<<" : "<<"Value(char) = "<< char(i) <<endl;

    }
    const int NoOfHoursPerDay = 24;
  return 0;
}
