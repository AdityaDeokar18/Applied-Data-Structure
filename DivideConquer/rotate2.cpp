#include <iostream>
using namespace std;

class Rotated {
public: 
    void find() {
        int n;
        cout << "HOW MANY ELEMENTS IN ARRAY: ";
        cin >> n;

        int* arr = new int[n]; 
        
        cout << "ENTER THE ELEMENTS OF ARRAY (Rotated Sorted): ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int key;
        cout << "ENTER THE KEY TO FIND: ";
        cin >> key;

        int start = 0;
        int end = n - 1;
        int mid;
        int foundLocation = -1;

        while(start <= end) {
            mid = start + (end - start) / 2; 

            if(arr[mid] == key) {
                foundLocation = mid; 
                break; 
            }

            // Case 1: Left half is normally sorted
            if(arr[start] <= arr[mid]) {
                // Check if key lies cleanly within the sorted left half
                if(key >= arr[start] && key < arr[mid]) {
                    end = mid - 1; // Go left
                } else {
                    start = mid + 1; // Go right
                }
            } 
            // Case 2: Right half is normally sorted
            else {
                // Check if key lies cleanly within the sorted right half
                if(key > arr[mid] && key <= arr[end]) {
                    start = mid + 1; // Go right
                } else {
                    end = mid - 1; // Go left
                }
            }
        }

        if(foundLocation != -1) {
            cout << "KEY FOUND AT INDEX LOCATION: " << foundLocation << endl;
        } else {
            cout << "KEY NOT FOUND IN THE ARRAY." << endl;
        }

        delete[] arr; // Free up dynamic memory allocation
    }
};

int main() {
    Rotated r;
    r.find();
    return 0;
}
