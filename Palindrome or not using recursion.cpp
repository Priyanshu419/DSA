// Check wheather a given string is palindrom or not using recursion
#include <iostream>
using namespace std;
bool checkpalindrom(string str , int i , int j){
  
    
    //base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        // recursive call
        return checkpalindrom(str ,i+1,j-1);
    }
}
    
   /* bool checkpalindrom(string str, int i) {
    // Base case
    if (i >= str.length() / 2) {
        return true;
    }

    // Check characters
    if (str[i] != str[str.length() - 1 - i]) {
        return false;
    } else {
        // Recursive call
        return checkpalindrom(str, i + 1);
    }
}   */
    
  

int main()
{
   string name = "abba";
   
   cout<<endl;
   bool ispalindrom = checkpalindrom(name , 0 , name.length()-1);
   
   if(ispalindrom){
       cout<<"it is a palindrom"<<endl;
   }
   else{
       cout<<"it is not a palindrom"<<endl;
   }
 

    return 0;
}
