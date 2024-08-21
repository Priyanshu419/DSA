
#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
   /* int chotti = fact(n-1);
    int badi = n*chotti;
    
    return badi;*/
    return n*fact(n-1);
}
int main()
{
int n;
cin>>n;

int ans = fact(n);
cout<<ans<<endl;
    return 0;
}
