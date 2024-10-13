#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    // pre computation
    int hash[27]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }
int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
    cout << hash[c-'a'] << "-"<< hash[c]<< endl;
}

  return 0;
}
