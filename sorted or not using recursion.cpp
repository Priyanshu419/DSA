// check wheather the given array is sorted or not.
#include <iostream>
using namespace std ;

bool sorted(int *arr , int size){
    //base case
    if(size == 0  || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart = sorted(arr+1 , size-1);
        return remainingpart;
    }
}
int main()
{
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    
    bool ans  = sorted(arr,size);
    
    if(ans){
        cout<<"it is a sorted array"<<endl;
    }
    else{
        cout<<"it is not a sorted array"<<endl;
    }

    return 0;
}
