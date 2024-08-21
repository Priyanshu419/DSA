// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printarray(int arr[] , int n) {
     for(int i = 0; i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void swapalternate(int arr[] , int size) {
    for(int i = 0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i] , arr[i+1]);
        }
    }
}
int main() {
    int even[8] = {4,1,2,3,8,7,6,5};
    int odd[5] = {3,8,5,7,4};
    
    swapalternate(even,8);
    printarray(even , 8);
    swapalternate(odd,5);
    printarray(odd,5);

    return 0;
}
