#include <iostream>

using namespace std;

int main()
{
    int a,n,sum=0;
    {
  {
      cout<<"enter no :- ";  
      cin>>n;
  }
  
  for(a=1;a<=n;a++)
    {
        if(a%2==0)
        {
        sum += a;
        }
    }

    cout << "Sum = " << sum;
    }
    return 0;
}
