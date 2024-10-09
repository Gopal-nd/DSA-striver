// prestore and fetching

//asking lot of tame 

#include<bits/stdc++.h>
using namespace std;

// int numberOfTimesRepetedInArr(int arr[], int x){
//     int count =0;
//     int arrsize = (sizeof(arr)/arr[0]);
//     for (int i=0;i<arrsize;i++){
//         if(arr[i]==x){
//             count ++;
//         }
//     }
// return count; // time complexity is 0(N)

// // 10 power 8 operatoins will be done in 1 second 
// }

int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>> arr[i];   // input of an array
//     }

// //     // preoperator
// // int hash[13] = {0};
// // for (int i=0;i<n;i++){
// //     hash[arr[i]] +=1;
// // }

// map<int ,int > mpp;
// for (int i=0;i<n;i++){
//     mpp[arr[i]] +=1;
// }


// for(auto it : mpp){
//     cout << it.first << "=>"<< it.second << endl;
// }

//     int q ;
//     cin >>q;   // input of number od query
//     while(q--){
//         int number;
//         cin>> number;

//         cout << "the out put number for the number "<< number << " :"<<   mpp[number] << endl;   // out for each number
//     }


// charector hashing ex  s='weifu'
string s ;
cin >> s;

// //pre compute

// int hash[256] ={0};
// for(int i=0;i<s.size();i++){
//     hash[s[i]]++;
// }

unordered_map<char ,int > mpp;
for (int i=0;i<10;i++){
    mpp[s[i]] +=1;
}


int q= 4;
int high;
while(q--){
    char c;
    cin>> c;
    
//fetch 
cout << mpp[c] << endl;
}
// int q= 4;
// while(q--){
//     char c;
//     cin>> c;
// //fetch 
// cout << mpp[c] << endl;
// }


// map -oredred /map --unordered_map

// map holdes key value pairs

    return 0;
}

// cerate an array that hold all the numbers in array and remenber the array in hash of array

// division methods  

// arr[i]%10;
