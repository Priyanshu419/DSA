// qick sort using recursion
#include <iostream>
using namespace std;
void quick(int *arr , int n){
    //base case ek case solved
    if(n==0 || n==1){
        return;
    }
    //recursive case , ek case solve kar liya bbaki yeh samhal lega
    for(int i = 0 ;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    quick(arr,n-1);
}
int main()
{
  int arr[5] = {3,2,7,4,6};
  
  quick(arr,5);
  
  for(int i =0;i<5;i++){
      cout<<arr[i]<<endl;
  }

    return 0;
}
