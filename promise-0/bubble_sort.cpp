#include <iostream>
using namespace std;

void bubbleSort(int arr[], int p) {
    for (int a = 0;  a< p - 1; a++) {
        for (int l = 0; l < p - a - 1; l++) {
            if (arr[l] > arr[l + 1]) {
                swap(arr[l], arr[l + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 6, 4};
    int p = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: "<<endl;
    }
    cout << endl;

    bubbleSort(arr, p);

    cout << "After sorting: ";
    for (int a = 0; a < p; a++) {
        cout << arr[a] << " ";
    }
    cout << endl;

    return 0;
}

