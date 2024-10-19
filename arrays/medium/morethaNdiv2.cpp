#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int n=7;
//     int arr[n]= {2,2,1,1,1,2,2};

    //brute force

    // two for loops 
    // for(int i=0;i<n;i++){
    //     int cnt=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             cnt++;
    //         }
    //     }
    //         if(cnt>n/2){
    //             cout << arr[i];
    //         }
    // }

    

//   return 0;
// }

    // better solution using the hashmaps 


    
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int n= v.size();

    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[v[i]]++;
    }
    for(auto i:mpp){
        if(i.second>n/2){
            return i.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
