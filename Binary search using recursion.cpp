// Binary search using recursion
#include <iostream>
using namespace std ;

void printarray(int arr[] , int s , int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

bool binarysearch(int *arr, int s, int e, int k){
    
    cout<<endl;
    
    printarray(arr,s,e);
    //base case
    
    //  if element not found
    if(s>e){
        return false;
    }
    
    int mid  = s + (e-s)/2;
    cout<<"value of arr mid is :-"<<arr[mid]<<endl;
    
    //if element found
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return binarysearch(arr , mid+1, e ,k);
    }
    else{
         return binarysearch(arr , s, mid -1 ,k);
    }
  
}

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    int key = 40;
    
    cout<<"present or not"<<endl<<binarysearch(arr,0,10,key);
    
    return 0;
}