
#include<bits/stdc++.h>
using namespace std;

int substringFunction(string &s,string target){
    int maxLength = 0;
    
for(int end=0;end<=s.size()-target.size();end++){
          string match = s.substr(end,target.size());
      if(match==target){
        maxLength++;
      }
        
  }

   return maxLength;
}

int main(){
string s,target;
  cout << "enter the string  : ";
  cin>>s;
  cout << "\n enter the target string : ";
  cin>>target;
  int ans = substringFunction(s,target);
  
  cout << "the nuberof occurencess = " << ans;
  return 0;

}
