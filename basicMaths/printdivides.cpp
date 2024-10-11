#include<bits/stdc++.h>
using namespace std;


int main(){
    // print all divisors
     int n;
     vector<int>ls;
     cin >> n;
     for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }

     }
     sort(ls.begin(),ls.end());
     for(auto it:ls) cout << it << " ";

  return 0;
}
