#include <iostream>
using namespace std;

void selectionSort(int arr[], int q) {
    for (int c = 0; c < q - 1; c++) {
        int minIdx = c;
        for (int l = c + 1; l < q; l++) {
            if (arr[l] < arr[minIdx]) {
                minIdx = l;
            }
        }
        swap(arr[c], arr[minIdx]);
    }
}

int main() {
    int arr[] = {5, 3, 8, 6, 4};
    int q = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int l = 0; l < q; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    selectionSort(arr, q);

    cout << "After sorting: ";
    for (int l = 0; l < q; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    return 0;
}

