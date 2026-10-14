#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

class Permutation {
public:
    void get() {
        vector<int> arr;
        vector<vector<int>> res; // Fixed: Changed to 2D vector
        int size;

        cout << "HOW MANY ELEMENTS DOES YOUR ARRAY HAVE? : ";
        cin >> size;

        cout << "ENTER THE ARRAY ELEMENTS : ";
        for (int i = 0; i < size; i++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        // Fixed: Start the index at 0 instead of 'size'
        permutations(res, arr, 0); 

        // Displaying the results
        cout << "\nALL PERMUTATIONS:\n";
        for (const auto& perm : res) {
            for (int num : perm) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }

    // Fixed: Changed return type to void since 'res' is modified by reference
    void permutations(vector<vector<int>>& res, vector<int>& arr, int idx) {
        if (idx == arr.size()) {
            res.push_back(arr);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);       // Swapping
            permutations(res, arr, idx + 1); // Recursive call
            swap(arr[idx], arr[i]);       // Backtracking
        }
    }
};

int main() {
    Permutation p;
    p.get();
    return 0;
}
