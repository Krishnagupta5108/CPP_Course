#include <iostream>
using namespace std;
 
class complex{
    int real , complex ; 
    public : 
    void getdata (void) {
        cout<<"The value of real is "<<real <<endl ;
        cout<<"The value of complex is "<<complex <<endl ;                                                 
    }

    void setdata(int a , int b ){
        real = a; 
        complex = b ; 
    }

} ;


int main (){

    complex c ; 

    c.setdata( 3 , 1 ) ; 
    c.getdata() ;

    // pointer of objects ************************************************************************************************************************************

    complex *ptr = & c ;  
    (*ptr ).setdata(  23, 4);
    (*ptr ).getdata( );
    
    // complex *ptr = new complex  ; 
    
    // (*ptr ).setdata(  321, 31);
    // (*ptr ).getdata( );
    
    //THE BELOW WILL RUN LIKE AS THE ABOVE RUNS.
    // ARROW OPERATOR ******************************************************
    complex *ptr = new complex  ; 
    
    // (*ptr ).setdata(  321, 31);
    ptr ->setdata( 92 , 4 );
    
    // (*ptr ).getdata( );
    ptr ->getdata( );
    
    
    
    
    
    // ARRAY OF OBJECTS**************************************************
    
    complex *ptr1 = new complex[4]  ; 
    
    // (*ptr ).setdata(  321, 31);
    ptr1 ->setdata( 21 , 7);
    
    // (*ptr ).getdata( );
    ptr1 ->getdata( );
    

    ptr1 ->setdata( 2 , 7);
    ptr1 ->getdata( );
    
    
    
    
 
 
 
    return 0;
}