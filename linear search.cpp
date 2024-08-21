#include <iostream>

using namespace std;
bool search(int arr[] , int size, int key){
    for(int i =0; i<size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
   int arr[10] = {5,7,-8,3,6,-11,-19,9,19,1};
   cout<<"enter the element to search for :-";
   int key;
   cin>>key;
   
   bool found = search(arr , 10 , key);
   
   if(found){
       cout<<"key is present"<<endl;
   }
   else{
       cout<<"key is absent"<<endl;
   }
   
   
   return 0;
}
