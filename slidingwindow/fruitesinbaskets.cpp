//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        int l = 0, r = 0, maxlen = 0, k = 2; // At most 2 types of fruits
        map<int, int> mpp;

        while (r < arr.size()) {
            mpp[arr[r]]++; // Add the current fruit
            while (mpp.size() > k) { // Shrink the window if more than 2 types
                mpp[arr[l]]--;
                 if (mpp[arr[l]] == 0) {
                    mpp.erase(arr[l]); // Remove the fruit type if count becomes 0
                }
                l++; // Move the left pointer
            }
            // Update the maximum length
            maxlen = max(maxlen, r - l + 1);
            r++; // Expand the window
        }

        return maxlen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalFruits(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends

