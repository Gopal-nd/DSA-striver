#include <iostream>
#include <vector>
#include <stack>
using namespace std;

const int MOD = 1e9 + 7;

int sumOfSubarrayMinimums(vector<int>& arr) {
    int n = arr.size();
    vector<int> ple(n, -1); // Previous Less Element
    vector<int> nle(n, n); // Next Less Element
    stack<int> s;

    // Compute PLE (Previous Less Element)
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            s.pop();
        }
        ple[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    // Clear the stack for reuse
    while (!s.empty()) s.pop();

    // Compute NLE (Next Less Element)
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        nle[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    // Calculate the sum of subarray minimums
    long long result = 0;
    for (int i = 0; i < n; ++i) {
        long long left_count = i - ple[i];
        long long right_count = nle[i] - i;
        result = (result + arr[i] * left_count * right_count) % MOD;
    }

    return result;
}

int main() {
    vector<int> arr = {3, 1, 2, 4};
    cout << "Sum of Subarray Minimums: " << sumOfSubarrayMinimums(arr) << endl; // Output: 17
    return 0;
}

