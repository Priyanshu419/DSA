// sum of array using recursion
#include <iostream>
using namespace std ;

int add(int *arr , int n){
    if(n==0){
        return 0;
    }
    // Recursive case: sum of the first n elements is the sum of the first (n-1) elements plus the nth element
     return add(arr, n - 1) + arr[n - 1];
}

int main()
{
    int arr[5] = {2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = add(arr, n);

    cout << "Sum of the array is: " << sum << endl;
   
    return 0;
}
