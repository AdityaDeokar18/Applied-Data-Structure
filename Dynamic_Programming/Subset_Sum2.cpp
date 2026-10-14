#include <iostream>
#include <vector>

using namespace std;

class Subset_Sum2 {
public:
    void get() {
        int n, sum;
        cout << "ENTER THE NUMBER OF ELEMENTS: ";
        cin >> n;

        // Using standard vector instead of VLA
        vector<int> arr(n);
        cout << "ENTER THE ELEMENTS: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "ENTER THE SUM THAT YOU WANT TO GET: ";
        cin >> sum;

        // dp[i][j] will be true if a subset of elements from arr[0..i-1] 
        // can form the sum equal to j
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        // Base Case 1: If sum is 0, answer is always true (empty subset)
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                // If the current element is greater than the target sum 'j',
                // we exclude it.
                if (arr[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                } 
                // Otherwise, check if we can get the sum by either 
                // excluding or including the current element.
                else {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }
            }
        }

        // The answer will be in the bottom-right corner of the table
        if (dp[n][sum]) {
            cout << "Subset can be constructed!" << endl;
        } else {
            cout << "Cannot be constructed!" << endl;
        }
    }
};

int main() {
    Subset_Sum2 s;
    s.get();
    return 0;
}