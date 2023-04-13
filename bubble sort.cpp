#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int a = 0;  a< n - 1; a++) {
        for (int l = 0; l < n - a - 1; l++) {
            if (arr[l] > arr[l + 1]) {
                swap(arr[l], arr[l + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";goi
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "After sorting: ";
    for (int a = 0; a < n; a++) {
        cout << arr[a] << " ";
    }
    cout << endl;

    return 0;
}

