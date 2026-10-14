#include<iostream>
#include<vector>
using namespace std;

// Function to check if s1 can be converted to s2
bool check(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

    // mark 1st position as true
    dp[0][0] = true;

    // traverse DP table
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {

            // if conversion possible till i, j
            if (dp[i][j])
            {

                // match after uppercase conversion
                if (j < m && toupper(s1[i]) == s2[j])
                    dp[i + 1][j + 1] = true;

                // deletion allowed only for lowercase
                if (!isupper(s1[i]))
                    dp[i + 1][j] = true;
            }
        }
    }

    return dp[n][m];
}

// driver code
int main()
{
    string s1 = "daBcd";
    string s2 = "ABC";

    if (check(s1, s2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
// } Driver Code Ends