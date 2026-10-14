#include<iostream>
using namespace std;

class Push {
public:
    void merge(int arr[], int low, int mid, int high) {
        int temp[100];
        int idx = 0;

        for (int i = low; i <= high; i++) {
            if (arr[i] != 0) {
                temp[idx++] = arr[i];
            }
        }

       /* while (idx <= (high - low)) {
            temp[idx++] = 0;
        }*/
        for(int i=idx;i<=high;i++) {
            temp[idx++]=0;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    void mergeSort(int arr[], int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;

            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);

            merge(arr, low, mid, high);
        }
    }

    void pushZero() {
        int n;
        cout << "ENTER THE NO OF ELEMENT IN ARRAY :";
        cin >> n;

        int arr[n];
        cout << "ENTER THE ELEMENT OF ARRAY :";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        mergeSort(arr, 0, n - 1);

        cout << "FINAL ARRAY :";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Push p;
    p.pushZero();
    return 0;
}