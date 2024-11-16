


#include <bits/stdc++.h>
using namespace std;
// bruet force is to find the next elment by doing thelenaear search
bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); //size of array
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); //size of array
    int longest = 1;
    //pick a element and search for its
    //consecutive numbers:
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        //search for consecutive numbers
        //using linear search:
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

//better solution

// step one is to sort the array 
// int longest =1,cnt = o,lastArry = INT_MIN;
// for(int i=0;i<n;i++){
// if(arr[i]-1==lastsmaller){
// cnt ++;
// lastArray =a[i];
// }
// else if(a[i]!= lastSmall){
// cnt =1;
// lastArray=a[i]
// }
//longest = max(longest,cnt);
// }
//
// return logest;


// optimal solution
// using the unordered_set data structure

// it is like strtiting from the begining in the sequence

int optimalSolution(vector<int> &arr){
int n = arr.size();
  int cnt=0;
  int longest =0;
  unordered_map<int> mpp(arr.begin(),arr.end());
//  for(int i=0;i<n;i++){
//    mpp.insert(arr[i]);
//  }


  for(int i=0;i<n;i++){
    if(mpp.find(arr[i]-1)==mpp.end()){
        int currentElement = arr[i];
      cnt =1;
      while (mpp.find(currentElemnet+1)!=mpp.end()) {
        currentElement++;
        cnt++
      }
       longest = max(longest,cnt);
  }
  return longest;
}



int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}


