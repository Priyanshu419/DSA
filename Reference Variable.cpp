// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void update2(int& n){
    n++;
}
void update1(int n){
    n++;
}
int main() {
    int n = 5;
  /* 
   cout<<i<<endl;
   i++;
   cout<<i<<endl;
   j++;
   cout<<j<<endl;
   cout<<j<<endl;*/
cout<<n<<endl;
update2(n);
cout<<n<<endl;
    return 0;
}
