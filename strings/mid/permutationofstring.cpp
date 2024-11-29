#include <iostream>
#include <string>
using namespace std;

void permute(string s, int l, int r) {
    // Base case: If the left pointer equals the right pointer, print the permutation
    if (l == r) {
        cout << s << endl;
        return;
    }

    // Recursive case: Swap each character and generate permutations
    for (int i = l; i < r; i++) {
        swap(s[l], s[i]);       // Swap the current character
        permute(s, l + 1, r);   // Recurse for the next position
        swap(s[l], s[i]);       // Backtrack (undo the swap)
    }
}

int main() {
    string s = "abc";
    cout << "Permutations of " << s << " are:\n";
    permute(s, 0, s.size());
    return 0;
}

