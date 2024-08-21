
#include <iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int smaller = power(n-1);
    int larger = 2*smaller;
    
    return larger;
}
int main()
{
int n;
cin>>n;

int ans= power(n);

cout<<ans<<endl;

    return 0;
}
