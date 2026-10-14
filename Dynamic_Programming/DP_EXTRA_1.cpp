/*Minimum Cost Climbing Stairs — LeetCode #746

LeetCode – Min Cost Climbing Stairs

Problem Statement:
You are given an array cost, where cost[i] represents the cost of stepping on the i-th stair.

You can start from either the 0th or 1st stair. From each stair, you can climb either one step or two steps.

Write a program using Dynamic Programming to find the minimum cost required to reach the top of the staircase.

Example:

Input:
cost = [10, 15, 20]

Output:
15

Explanation:
Start from stair 1:

15→jump two steps to the top

Total cost = 15*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {

    int n = cost.size();

    vector<int> dp(n);

    // Base cases
    dp[0] = cost[0];
    dp[1] = cost[1];

    // Fill DP table
    for (int i = 2; i < n; i++) {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }

    // Minimum cost to reach the top
    return min(dp[n - 1], dp[n - 2]);
}

int main() {

    vector<int> cost = {10, 15, 20};

    cout << "Minimum Cost = "
         << minCostClimbingStairs(cost);

    return 0;
}