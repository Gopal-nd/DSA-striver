#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Helper function to check if placing a queen is valid
    bool isSafe(int row, int col, vector<string> &board, int n) {
        // Check the column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') return false;
        }
        
        // Check upper left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }

        // Check upper right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }

        return true;
    }

    // Backtracking function
    void solve(int row, vector<string> &board, vector<vector<string>> &result, int n) {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';   // Place the queen
                solve(row + 1, board, result, n); // Recur for the next row
                board[row][col] = '.';   // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.')); // Initialize an empty board
        solve(0, board, result, n);
        return result;
    }
};

int main() {
    Solution sol;
    int n;// Change the size of the board here
    cin>>n;
    vector<vector<string>> solutions = sol.solveNQueens(n);

    // Print the solutions
    int pos=0;
    for (auto &solution : solutions) {
    pos++;
        for (string &row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
  cout<< "Posible solutions : "<< pos;
    return 0;
}

