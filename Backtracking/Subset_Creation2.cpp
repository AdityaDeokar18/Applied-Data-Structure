/*#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void subsetRecur(int i, vector<int>& arr, 
       vector<vector<int>>& res, vector<int>& subset) {
    
    // add subset at end of array
    if (i == arr.size()) {
        res.push_back(subset);
        return;
    }
    
    // include the current value and 
    // recursively find all subsets
    subset.push_back(arr[i]);
    subsetRecur(i+1, arr, res, subset);
    
    // exclude the current value and 
    // recursively find all subsets.
    subset.pop_back();
    subsetRecur(i+1, arr, res, subset);
}

vector<vector<int> > subsets(vector<int>& arr) {
    
    vector<int> subset;
    vector<vector<int>> res;
    
    // finding recursively
    subsetRecur(0, arr, res, subset);
    return res;
}

int main() {
    vector<int> arr = { 1, 2, 3 };
    vector<vector<int> > res = subsets(arr);
    
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];
            if (j != res[i].size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}*/

#include <iostream>
#include <vector>

void printSubsets(const std::vector<int>& arr) {
    int n = arr.size();
    
    // Total number of subsets is 2^n
    int totalSubsets = 1 << n; 

    // Iterate through all binary numbers from 0 to (2^n - 1)
    for (int mask = 0; mask < totalSubsets; ++mask) {
        std::cout << "{ ";
        
        // Check every bit position of the current 'mask'
        for (int i = 0; i < n; ++i) {
            // If the i-th bit is set, include arr[i]
            if ((mask & (1 << i)) != 0) {
                std::cout << arr[i] << " ";
            }
        }
        std::cout << "}\n";
    }
}

int main() {
    std::vector<int> arr = {10, 20, 30};
    printSubsets(arr);
    return 0;
}

