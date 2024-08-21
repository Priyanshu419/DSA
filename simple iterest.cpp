
#include <iostream>

using namespace std;

int main()
{
   int p,r,t,si;
   {
       cout<<"enter your principle amount:-";
       cin>>p;
       
       cout<<"enter your interest rate:-";
       cin>>r;
       
       cout<<"enter your time in months:-";
       cin>>t;
   }
   
   si=p*r*t/100;
   cout<<"the simple interst is "<<si;

    return 0;
}
