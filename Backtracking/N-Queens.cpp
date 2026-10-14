/*Place N queens on an N × N chessboard such that no two queens attack each other.

For N = 4, there are two valid solutions. 

This is probably the best advanced problem for demonstrating why backtracking is useful for constraint-based problems.*/



#include <iostream>
using namespace std;

int pos[20], n;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (pos[i] == col ||
            abs(pos[i] - col) == abs(i - row))
            return false;
    }
    return true;
}

void solve(int row) {
    if (row == n) {
        cout << "[ ";
        for (int i = 0; i < n; i++)
            cout << pos[i] << " ";
        cout << "]" << endl;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col)) {
            pos[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    cout << "Enter N: ";
    cin >> n;

    solve(0);
    return 0;
}

