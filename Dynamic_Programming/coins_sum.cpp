#include <iostream>
using namespace std;

class Coins {
public:
    void get() {
        int n;
        cout << "ENTER THE NO OF DIFFERENT TYPES OF CURRENCY: ";
        cin >> n;

        if (n <= 0) return;

        // Dynamic memory allocation instead of VLAs
        int* coin = new int[n];
        cout << "ENTER THE DIFFERENT CURRENCY values: ";
        for (int i = 0; i < n; i++) {
            cin >> coin[i];
        }

        int target_sum;
        cout << "WHICH SUM DO YOU HAVE TO MAKE: ";
        cin >> target_sum;

        int* arr_temp = new int[n];
        int gen_sum = 0;
        int count = 0; // Tracks how many coins we actually used

        for (int i = 0; i < n; i++) {
            // Check if adding the coin stays within the target sum
            if (gen_sum + coin[i] <= target_sum) {
                arr_temp[count] = coin[i]; // Store contiguously to avoid garbage values
                gen_sum += coin[i];
                count++;
            }
        }

        // Print results safely
        if (gen_sum == target_sum) {
            cout << "Generated sum exactly using: ";
            for (int i = 0; i < count; i++) {
                cout << arr_temp[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Cannot make the exact sum. Closest sum reached: " << gen_sum << endl;
        }

        // Clean up allocated memory to prevent memory leaks
        delete[] coin;
        delete[] arr_temp;
    }
};

int main() {
    Coins c;
    c.get();
    return 0;
}
