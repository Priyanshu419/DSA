// C++ program to implement recursive Binary Search

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
	if (high >= low) {

		int mid = low + (high - low) / 2;

	
		if (arr[mid] == x){
			return mid;
		}
		
		if (arr[mid] > x){
			return binarySearch(arr, low, mid - 1, x);
		}    
	    return binarySearch(arr, mid + 1, high, x);
	}
	return -1;
}

// Driver code
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };

	// Element to be searched
	int x ;
	cin>>x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1){
		 cout << "Element is not present in array";
	}
	else{
		 cout << "Element is present at index " << result;
	    
	}

	return 0;
}


