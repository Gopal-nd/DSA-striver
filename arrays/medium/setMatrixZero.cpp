#include<bits/stdc++.h>
using namespace std;
// brute force method

void markRow(vector<vector<int>> & matrix,int n,int m,int i){
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
void markCol(vector<vector<int>> & matrix,int n,int m,int j){
    for(int i=0;i<n;i++){

        cout << matrix[i][j]<< " "<<endl;
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix,n,m,i);
                markCol(matrix,n,m,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}

vector<vector<int>> zeroMatrixBetterone(vector<vector<int>> &matrix, int n, int m){
// create two array with initailal values row and col is 0

int row[m]={0};
int col[n] = {0};

 for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark ith index of row wih 1:
                row[i] = 1;

                // mark jth index of col wih 1:
                col[j] = 1;
            }
        }
    }

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;




}
int main(){
    vector<vector <int>>matrix ={{1,2,1},{1,0,1},{1,1,1}};
    int n = matrix.size();
    cout << n<<endl;
    int m = matrix[0].size();
    cout << m<< endl;
    // vector<vector<int>> ans = zeroMatrix(matrix, n, m);
      vector<vector<int>> ans = zeroMatrixBetterone(matrix, n, m);


    cout << "The Final matrix is: n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }

  return 0;
}


/// better ones

