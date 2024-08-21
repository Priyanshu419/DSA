
#include <iostream>
using namespace std;

int counting(int n){
    //base case
    if(n==0){
        return 1;
    }
    
    //cout<<n<<endl;
    
    //recursive relation
    counting(n-1);
    
      cout<<n<<endl;
}
int main()
{
int n;
cin>>n;

cout<<endl;
counting(n);

    return 0;
}
