#include<bits/stdc++.h>
using namespace std;


int main(){
    // vetors are dynamic in nature

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // dynamical increase size and push backside itself

    vector<pair<int,int>> vec;

    vec.push_back({1,3});
    vec.emplace_back(1,2);

    // //declare something in vector
    vector<int> v10(5,100);
    vector<int> v1(5);  // initalize 5 instence of zero value

    vector <int> v2(v10); // cop of v10 

     cout << v1[1];


    // iterators

//     //v1
vector <int> m(5,99);
// cout <<m[0]<<m[1]<<m[3];

m[0] = 878;

cout << *m.begin();
m[4]=032;
cout <<m.back();


// method one for iterators

for(auto it = m.begin();it!=m.end();it++){
    cout << endl;
    cout << *(it) << endl;
}

// method two 

for(auto it : m){
    cout << it << " ";
}


// ereare function

m.erase(m.begin()+1);

// vector.errase(start,end)  give start and up to after one

// m.insert( m.begin()+1,2 ,10); (where, what, whatno);  start and end

m.size();
m.pop_back();

m.clear();



  return 0;
}




