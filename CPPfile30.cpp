#include <iostream>
using namespace std;

//--------copy constructor************************************************* 
 
class number { 
    int a ; 
    public : 
    number ( ){ 
        a = 0 ; 
    }
    
    number (int num ) {
        a  =num ;   
    }
    
        number (number &num ) {
            cout<<"COPY Construtor is  called!!!";
           a  =num.a ;   
        }
    void display ( ){
        cout<<"Your number is "<<a  ; 
    }




} ; 
 int main (){
    number x , y , z(44) ;
    
    x.display() ; 
    y.display() ; 
    z.display() ;

    //--------COPY constructor formation --------------
    number z1(z) ; // Yes copy constuctor is called
    z1.display() ;

    number z2 = z; // Yes copy constuctor is called
    z2.display() ;

    number z3; // NO. The copy constuctor is not  called
    z3 = z ; // only while forming the object than need to assign the copy constructor properties 
    z3.display() ; // But the z3 prints the 44 number 

    return 0;
}