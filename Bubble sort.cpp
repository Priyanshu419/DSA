// BUBBLE SORT
#include <iostream>
using namespace std;
void printarray(int arr[] , int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[] , int n){
    for(int i = 0 ; i<n; i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j] , arr[j+1]);
            }
        }
    }
    cout<<endl;
}
int main() {
int bubble[10] = {4,1,8,6,2,3,7,5,9,11};

bubblesort(bubble,10);
printarray(bubble,10);

    return 0;
}
