#include <iostream>
using namespace std;

// // Function to check if a string is a palindrome

void Palindrome(int n ) {
    
     int rem = 0  , temp , num  , rev ; 
    num = n ; 

     while (n != 0 )
     {
        rem =  n % 10 ; 
        rev = rev*10 + rem ; 
        n = n / 10 ; 
     }
     


}
 
int main (){
    int size; 
    cout<<"size";
    cin>>size ;
    Palindrome(size);

 
 
 
    return 0;
}