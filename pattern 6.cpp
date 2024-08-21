

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter a digit:-";
    cin>>a;
    
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<a-j+1;
        }
        cout<<endl;
    }

    return 0;
}