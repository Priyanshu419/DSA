#include <iostream>

using namespace std;

int main()
{
    int a,n,sum;
    {
  {
      cout<<"enter no :- ";  
      cin>>n;
  }
  
  for(a=1;a<=n;a++)
    {
        sum += a;
    }

    cout << "Sum = " << sum;
    }
    return 0;
}
