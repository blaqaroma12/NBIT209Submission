#include <iostream>
using namespace std;

void insectSort(int arr[], int n) {
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;

        // Forward pass
        for (int b = start; b < end; b++) {
            if (arr[b] > arr[b + 1]) {
                swap(arr[b], arr[b + 1]);
                swapped = true;
            }
        }

        // If no swaps were made, the list is already sorted
        if (!swapped) {
            break;
        }

        swapped = false;

        // Backward pass
        for (int b = end - 1; b >= start; b--) {
            if (arr[b] > arr[b + 1]) {
                swap(arr[b], arr[b + 1]);
                swapped = true;
            }
        }

        start++;
        end--;
    }
}

int main() {
    int arr[] = {5, 3, 8, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int b = 0; b < n; b++) {
        cout << arr[b] << " ";
    }
    cout << endl;

    insectSort(arr, n);

    cout << "After sorting: ";
    for (int b = 0; b < n; b++) {
        cout << arr[b] << " ";
    }
    cout << endl;

    return 0;
}

