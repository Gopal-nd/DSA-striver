#include <bits/stdc++.h>
using namespace std;

// void will not return

// int will return
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second <p2.second) return true;
}

int main(){
int me[3]={1,2,3};
cout << me;

    //pairs 
pair<int,int> p = {1,3};
cout << p.first<<" " << p.second;
pair<int,pair<int,int>> q = {1,{2,34}};
cout << q.first<<" "<<q.second.first;
pair<int,string> arr[] = {{1,"haiusy"},{2,"oiawkdeo"}};
cout << arr[1].second;


//vectors
vector<int> v;
v.push_back(1);
v.emplace_back(2);
v.push_back(3);
vector<pair<int,string>> vec(3,{2,"hi"});
v.emplace_back(1);
v.emplace_back(14213);
v.emplace_back(123);
cout<< endl;
vector<int> vect;

//iterator
cout << v[1];

vector<int> ::iterator it = v.begin();
cout << *(it)<< endl;
// v.end v.rend v.rbegin;


for(vector<int> ::iterator it = v.begin();it !=v.end();it++){
    cout <<*(it) <<" ";
}

for( auto it = v.begin(); it != v.end(); it++){
      cout <<*(it) <<" ";
}
cout << endl;

//to delete the element give 
v.erase(v.begin()+1);

// v.erase(start address, end addres);
v.erase(v.begin()+1,v.end()-2);


// inserting 

  // inserting single elmente v.insert(where, what)
v.insert(v.begin(),3);
   // insert multiple elemnets v.insert(where,numberOfelements,number to insert)
   // insert multiple elemnets v.insert(where,from,to)
   v.insert(v.begin(),3,8);


v.clear();

cout <<v.empty()<< endl;

v.clear();

////////////         list    //////////////////

list<int> ls;
ls.push_back(1);
ls.push_front(2);
for(auto it :ls){
    cout << it <<" ";
}

for(auto it :v){
    cout << it <<" ";
}

/////////////////////     DQ     ////////////////

// dq is as same as list


////////////////   stack      ////////////////

stack<int> st;
st.push(1);
st.push(2);


//pop()

st.pop();

st.size();
st.pop();
st.empty();

// lifo

//////////////////     Queue     ///////////////

queue<int> que;
// fifo

// push , pop front back 
que.push(1);
que.push(4);
que.push(2);
que.push(3);
//  q.pop delets front element





/////////////////////       priority          ///////////////////

priority_queue<int> pq;
pq.push(5);
// priority od top large numbers


priority_queue<int, vector<int>, greater<int>> spq;
spq.push(76);    // first priority for the small numbers



//////////////  set     //////////////
// it is sorted and unique 
// set<int> st;

// auto it :st.find(3);

// st.insert(2);
// functions  begin,  end() , size(), swap() find()


///////////////////  multi set  //////////

multiset<int> mt;
// only sortred but not unique
///////////////////  unorderd_set  ////////////
// uniqe bit not sorted
unordered_set<int> ut;
// only sortred but not unique



///////////////////////////         map    ///////////////////////////
// KEY VALUE PAIRS 
map<int, int> mpp;
cout << "tttttttttttttttt" << endl;
// mpp[0]=2;
mpp.insert({2,5});

for(auto it: mpp){
 cout << it.first << " " << it.second << endl;
} 

// STORE SORTED AND UNIQUE




// multimap

// unordered_map

/////////////////////////////////    Algorithms    ///////////////////
sort (a, a+n);
sort(v.begin(),v.end())
pair <int, int> a[]= {{1,2},{6,3},{2.9}};

sort(a+2,a+ 4);

sort(a,a+n, greater<int>);

sort (a, a+n,comp);



    return 0;
}

//algorithms 
//containers
//functions
//iterators

