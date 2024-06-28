#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int,int>p={1,2};
    pair<int,pair<int,pair<int,int>>> p3;
    cout << p.first << endl;
    
    // cin >> p3.second.second.first;
    cout << p3.second.second.first;

    // _Vector_base

    vector<int>v;  // cerast eempoty container {}
    v.push_back(2);


    vector<int>v1(5,67);
    vector<pair<int,int>>v2(21,{2,4});
    v1.emplace_back(1);
    cout << v1[0];

    cout << endl;
            for (auto it = v1.begin();it !=v1.end();it++){
        cout << *(it) << " ";
    }
            for (auto it :v2){
        cout << it.first << " ";
        cout << it.second << " ";
    }

    v2.erase(v2.begin()+1,v2.begin()+2);
    // cout << v;

    string s="1236";
    sort(s.begin(),s.end());
    do{
        cout << s<< endl;
    }while(next_permutation(s.begin(),s.end()));


    int maxc =*max_element(s.begin(),s.end());
    cout << maxc<< endl;
    return 0;
}