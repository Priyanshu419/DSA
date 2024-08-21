#include <iostream>

using namespace std;

int main(){
    int arr[] = {2 , 6 , 3 , 8 };
    int size = 4;
    
    int sum = 0;
    
    for(int i =0 ;i<size ;i++){
        sum = sum + arr[i];
    }
    
    cout<<"the sum of all the integers in the array is:- "<<sum;

}