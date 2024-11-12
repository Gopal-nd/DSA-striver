#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.first) return true;
    if(p1.second>p2.second) return false; 
    if(p1.first>p2.second) return true;
    return false
}

int main(){
    // sort(v.begin(),v.end());
    // decenting oredr

    // sort(a,a+n,greater<int>())

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    /// sortit acoording to second one
 int n = a.size();
    //coustom sort
    sort (a,a+n,comp);

  return 0;
}
