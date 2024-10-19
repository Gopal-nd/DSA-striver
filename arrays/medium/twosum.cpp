// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n=5;
//     int arr[n]= {2,6,5,8,11};
//     int tar=14;
//     int tsum=0;
//     for(int i=0;i<n;i++){
//         tsum+=arr[i];
//     }

//     for(int i=0;i<n;i++){
 
//         int sum=0;
//         for(int j=0;j<n;j++){
//           sum = arr[i]+arr[j];
//           if(tar==sum){
//             cout <<i <<" "<< j;
//             cout << "YES"<< endl;
//           }
//         }
//         cout << endl;
//     }

//   return 0;
// }

// better

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(int n, vector<int> &arr, int target) {
//     unordered_map<int, int> mpp;
//     for (int i = 0; i < n; i++) {
//         int num = arr[i];
//         int moreNeeded = target - num;
//         if (mpp.find(moreNeeded) != mpp.end()) {
//             return {mpp[moreNeeded], i};
//         }
//         mpp[num] = i;
//     }
//     return { -1, -1};
// }






//optimal solution

string twoSum(int n, vector<int> &arr, int target) {
    
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
    cout <<"rigth ="<< right << arr[right]<<", "<< "left"<<" = "<<left << arr[left];   
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}



int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}



// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     vector<int> ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;
//     return 0;
// }