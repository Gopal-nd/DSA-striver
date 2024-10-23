#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    long long res =1;
    // calculating nCr;

    for(int i=0;i<r;i++){
        res =res * (n-i);
        res = res/(i+1);
    }
    return res;
}

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> PAscalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}

// printing Nth row
void PascalTriangle(int n){
    for(int i=0;i<=n;i++){
        cout << nCr(n-1,i-1) << " ";
    }
    cout << "n";
}

int pascalTriangle(int r, int c){
    int element = nCr(r-1,c-1);
    return element;
}
int main(){
       int r = 5; // row number
    int c = 3; // col number
    int n =5;
    PascalTriangle(n);
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "
            << element << "n";

    vector<vector<int>> ans = PAscalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0; 

  
}
