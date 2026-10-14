#include <iostream>
#include <vector>

using namespace std;

// Global or helper variables to store results easily
vector<vector<int>> result;

void backtrack(int index, int current_sum, int target, vector<int>& candidates, vector<int>& current) {
    // Base Case 1: If we hit the target, save this combination
    if (current_sum == target) {
        result.push_back(current);
        return;
    }
    
    // Base Case 2: If we overshoot the target or run out of numbers, stop
    if (current_sum > target || index >= candidates.size()) {
        return;
    }

    // Choice 1: TAKE the current number (stay on the same index to reuse it)
    current.push_back(candidates[index]);
    backtrack(index, current_sum + candidates[index], target, candidates, current);
    
    // Backtrack: Undo the choice (remove the number)
    current.pop_back();

    // Choice 2: LEAVE the current number and move to the next index
    backtrack(index + 1, current_sum, target, candidates, current);
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<int> current;

    // Start backtracking from index 0 with a starting sum of 0
    backtrack(0, 0, target, candidates, current);

    // Print output
    for (auto combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
