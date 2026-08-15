#include <iostream>
using namespace std;
 
//  simple calculator----------
int main (){

    int a , b , result ; 

    cout<<"Enter Your First number for simple calculation :"<<endl;
    cin>>a ;

    cout<<"Enter Your Second number for simple calculation :"<<endl;
    cin>>b;
    
    cout<<"The addition of "<<a<<" + "<<b<<" = "<<(a + b );
    cout<<"The substraction of "<<a<<" - "<<b<<" = "<<(a - b );
    cout<<"The multiplication of "<<a<<" * "<<b<<" = "<<(a * b );
    cout<<"The division of "<<a<<" / "<<b<<" = "<<(a / b );
    cout<<"The modulo remender after the division  of "<<a<<" / "<<b<<"  is left "<<(a% b );
 
 
 
    return 0;
}