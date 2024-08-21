// Linear search using recursion
#include <iostream>
using namespace std ;

bool linearsearch(int arr[],int size,int k){
    //base case
   if(size == 0){
       return false;
   }
   if(arr[0] == k){
       return true;
   }
   else{
       bool remainingpart = linearsearch(arr+1 , size-1,k);
       // arr + 1 is because we have already check one element of the array, so we move forward.
       // size - 1 is because we have check 1 element already , so we check the others and neglect that element.
       return remainingpart;
   }
}

int main()
{
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int key = 2;
    bool ans = linearsearch(arr , size , key);
    
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
}
