#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int c = 0; c < n - 1; c++) {
        int minIdx = c;
        for (int l = c + 1; l < n; l++) {
            if (arr[l] < arr[minIdx]) {
                minIdx = l;
            }
        }
        swap(arr[c], arr[minIdx]);
    }
}

int main() {
    int arr[] = {5, 3, 8, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int l = 0; l < n; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "After sorting: ";
    for (int l = 0; l < n; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    return 0;
}

