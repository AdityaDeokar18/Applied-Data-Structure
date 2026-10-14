/*LeetCode – House Robber

Problem Statement:
You are given an array nums, where nums[i] represents the amount of money stored in the i-th house. You want to rob the maximum possible amount of money, but you cannot rob two adjacent houses because the security systems are connected.
Write a program using Dynamic Programming to find the maximum amount of money that can be robbed without robbing two adjacent houses.

Example:

Input:
nums = [2, 7, 9, 3, 1]

Output:
12

Explanation:
Rob houses containing:

2+9+1=12 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums) {

    int n = nums.size();

    if (n == 1)
        return nums[0];

    vector<int> dp(n);

    // Base cases
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    // DP
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1],
                    dp[i - 2] + nums[i]);
    }

    return dp[n - 1];
}

int main() {

    vector<int> nums = {2, 7, 9, 3, 1};

    cout << "Maximum Money = " << rob(nums);

    return 0;
}