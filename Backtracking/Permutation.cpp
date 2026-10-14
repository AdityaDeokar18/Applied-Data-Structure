#include<iostream>
#include<vector>
using namespace std;
class Permutation {
    public:
    void get() {
        vector<int> arr,res;
        int size;
        cout<<"HOW MANY ELEMENT YOUR ARRAY HAS :";
        cin>>size;
        cout<<"ENTER THE ARRAY ELEMENT :";
        for(int i=0;i<size;i++) {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        for(int i:arr) {
            cout<<i<<" ";
        }
        permutations(res,arr,size);
    }
        vector<std::vector<int>> permutations(vector<vector<int>>& res, vector<int> arr, int idx) {
    if (idx == arr.size()) {
        res.push_back(arr);
        return;
    }

    // Permutations made by swapping each element
    // starting from index `idx`
    for (int i = idx; i < arr.size(); i++) {
      
        // Swapping
        swap(arr[idx], arr[i]);

        // Recursive call to create permutations 
        // for the next element
        permutations(res, arr, idx + 1);

        // Backtracking
        swap(arr[idx], arr[i]);
    }
        return res;
}

    
};

int main() {
    Permutation p;
    p.get();
    return 0;
}