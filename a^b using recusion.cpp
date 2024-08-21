// Check wheather a given string is palindrom or not using recursion
#include <iostream>
using namespace std;
int power(int a , int b){
    // base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    // recursive case
    int ans = power(a,b/2);
    
    //agar b even hai toh ((a^b/2) * (a^b/2))
    //agar b odd hai toh a * ((a^b/2) * (a^b/2))
    
    if(b%2 == 0){
        // if b is even
        return ans*ans;
    }
    else{
        // if bis odd
        return a*ans*ans;
    }
}
    
  

int main()
{
  int a,b;
  cin>>a>>b;
  cout<<endl;
  cout<<a<<"^"<<b<<"="<<power(a,b)<<endl;
  
  

    return 0;
}
