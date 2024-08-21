#include <iostream>

using namespace std;

int main(){
char ch ;
cout<<"enter an alphabet:-";
cin>>ch;
{
if(ch>=65 && ch<=90 )
{
    cout<<"the alphabet is uppercase";
}
else if(ch>=97 && ch<=122)
{
    cout<<"the alphabet is lowercase";
}
}
return 0;
}
