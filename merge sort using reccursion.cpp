#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    // Copy values
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }
    
    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }
    
    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    while(index1 < len1 && index2 < len2) {
        if(first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    
    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }
    
    // Free the allocated memory
    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e) {
    if(s >= e) {
        return;
    }
    
    int mid = (s + e) / 2;
    
    // Solve left part
    mergesort(arr, s, mid);
    
    // Solve right part
    mergesort(arr, mid + 1, e);
    
    // Merge the sorted parts
    merge(arr, s, e);
}

int main() {
    int arr[10] = {60,34,98,19,34,70,37,51,30,45};
    int n = 10;
    
    mergesort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}

