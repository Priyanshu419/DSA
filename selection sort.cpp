#include <iostream>
using namespace std;

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int even[6] = {23, 56, 34, 12, 71, 40};
    int odd[5] = {45, 22, 78, 15, 90};

    selectionsort(even, 6);
    printarray(even, 6);

    return 0;
}

