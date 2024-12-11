#include <iostream>
#include <vector>
#include <stack>
using namespace std;

long long sumOfSubarrayRanges(vector<int>& arr) {
    int n = arr.size();
    const long long MOD = 1e9 + 7;

    // Arrays to store PLE and NLE for minimums
    vector<int> ple_min(n, -1), nle_min(n, n);

    // Arrays to store PGE and NGE for maximums
    vector<int> ple_max(n, -1), nle_max(n, n);

    // Monotonic stack for PLE and NLE for minimums
    stack<int> s;
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            s.pop();
        }
        ple_min[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop();

    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        nle_min[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop();

    // Monotonic stack for PGE and NGE for maximums
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            s.pop();
        }
        ple_max[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop();

    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && arr[s.top()] <= arr[i]) {
            s.pop();
        }
        nle_max[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    // Calculate the sum of subarray ranges
    long long result = 0;
    for (int i = 0; i < n; ++i) {
        long long left_min = i - ple_min[i];
        long long right_min = nle_min[i] - i;
        long long left_max = i - ple_max[i];
        long long right_max = nle_max[i] - i;

        // Contribution as maximum minus contribution as minimum
        result += arr[i] * (left_max * right_max - left_min * right_min);
        result %= MOD;
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3};
    cout << "Sum of Subarray Ranges: " << sumOfSubarrayRanges(arr) << endl; // Output: 4
    return 0;
}

