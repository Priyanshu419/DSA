// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isprime(int n){
    for(int i= 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    
    if(isprime(n)){
        cout<<"it is prime no"<<endl;
    }
    else{
        cout<<"not a prime no";
    }



return 0;

}