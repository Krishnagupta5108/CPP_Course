#include <iostream>
using namespace std;

class complex {
int a , b ;
public :
    // Creating a constructoe it is special member class function with same name as of the class.
    // It is used to initialize the object of its class .
    //Its invokes automatacilly whenever class is created. 
     

    complex (void ) ; // Constructor Declaration

void printnumber()
{
    cout << "Your Complex number is " << a << " + " << b << endl;
}
};

 complex ::  complex (void ) {     // This is defalut constructor.
    a = 0 ; 
    b = 0 ; 
    // cout<<"Hello world " ; 
 }
 
int main (){
    complex c1  , c2 , c3 ;  // Hence the clas is created three times therefore the Constructor is called times. 

    c1.printnumber() ; 
    c2.printnumber() ; 
    c3.printnumber() ; 
    
 
 
 
    return 0;
}

/*  Characteristics of the Constructor

1. It should be declared in the public section.
2. They are autumatically invoked.
3. They cannot returns values and the data types.
4. It can have default argumenst .
5. We cannot refer to their address.


*/
