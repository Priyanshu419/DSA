/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void update(int arr[] , int n){
    cout<<"inside the funtion"<<endl;
    
    arr[0] = 120;
    
    for(int i= 0; i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"going back to the main fuction"<<endl;
}

int main()
{
  int arr[3] = {1,2,3};
  
  update(arr ,3);
  
  for ( int i= 0; i<3;i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}
