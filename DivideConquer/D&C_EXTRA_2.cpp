/*Problem Statement

Given a sorted array that may contain duplicate elements and a target value, determine how many times the target occurs in the array.

If the target is absent, print 0.

Example
Array:  [1, 2, 2, 2, 3, 4, 5]
Target: 2

Output: 3

Because 2 occurs 3 times.*/

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;   // Search further left
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return first;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;    // Search further right
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return last;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int target = 2;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    if (first == -1) {
        cout << "Occurrences: 0";
    }
    else {
        cout << "Occurrences: " << last - first + 1;
    }

    return 0;
}