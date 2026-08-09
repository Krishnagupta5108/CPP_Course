#include <iostream>
using namespace std;
 
// Dynamicaly initializationo of the construction ***************************************************************

class Bank {
int principal ; 
int years ; 
float interestRate ;
int returnValue ;
   public : 

   Bank() { }   // ************THis line is very important because of the Dynamic constructor 
   Bank (int p , int y , float r );
   Bank (int p , int y , int  r );
   void  show (void ){
    cout<<"Your principal value is "<<principal<<" and after "<<years<<" years is its return value is "<<returnValue<< endl ;
   }
};
Bank ::Bank(int p, int y, float r)
{
    principal = p ;
    years  = y ;
    interestRate = r ;
    returnValue = principal ; 
    for ( int   i = 0; i < years ;  i++)
    {
        returnValue = returnValue* (1 + interestRate ) ; 
    }
}
Bank ::Bank(int p, int y, int r)
{
    principal = p ;
    years  = y ;
    interestRate = float(r)/100 ;
    returnValue = principal ; 
    for ( int   i = 0; i < years ;  i++)
    {
        returnValue = returnValue* (1 + interestRate) ; 
    }
}

int main (){
    int p;
    int y;
    float r;
    int R;

    Bank b1 ,b2 , b3 ;
      
    b3.show() ;  // This runs the bank function that is the constructor with the garbage valaue  

    b1 = Bank(p, y, r) ; 
    b1.show  ();

    b2 = Bank(p, y, R);
    b2.show();

    return 0;
}