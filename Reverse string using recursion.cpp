// Reverse string using recursion
#include <iostream>
using namespace std;
void reverse(string& str , int i , int j){
   // '&' ka upyog isliye kiya hai kyuki isme pass by value karke copy ban rahi hai bas
   // isliye isko pass by reference karna hoga taaki  string reverse hojaye.  
    
    //base case
    if(i>j){
        return;
    }
    swap(str[i] , str[j]);
    i++;
    j--;
    
    // recursive call
    reverse(str,i,j);
}
int main()
{
   string name = "priyanshu";
   
   reverse(name , 0 , name.length()-1);
   
   cout<<name<<endl;

    return 0;
}
