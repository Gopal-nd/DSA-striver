#include <iostream>
#include <vector>
using namespace std;

void printsum(vector<int>& arr) {
int n = arr.size();
  for(int i=0;i<n;i++){
    int sum =0,subsum =0;
    for(int j=i;j<n;j++){
     sum += arr[j]; 
      // sum of each sub arry
    subsum+=arr[j];
      cout << subsum <<" ";
    }
    cout << endl;
    cout << sum<<endl;

  }
}
void printSubarrays(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        // Iterate through all possible ending points for each starting point
        for (int j = i; j < n; ++j) {
            // Directly print the subarray from index i to j
            for (int k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main() {
    vector<int> arr = {1, 2, 3};
    printsum(arr);
    cout << endl;
    printSubarrays(arr);
        return 0;
}

