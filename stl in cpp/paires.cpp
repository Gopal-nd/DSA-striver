#include<bits/stdc++.h>
using namespace std;


int main(){
    pair<int,int> p = {1,3}; // initalize the value

    cout << p.first << " "<<p.second;

    pair <int,pair<int,int>> pp= {3,{2,3}};
    cout << pp.second.second;

    pair<int,int> a[] = {{2,3},{8,5},{7,3}};

    cout << a[1].first;

  return 0;
}
 