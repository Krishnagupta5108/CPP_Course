#include <iostream>
using namespace std;
 // Constructor Overeloading **************8
 class complex {
   
    int a , b ; 
    public :
    complex ( ){ 
        a = 0 ; 
        b = 0 ;
    }

    complex (int x , int y ){
        a = x ;
        b = y ; 
    }

    complex ( int x ){
        a = x ; 
        b = 0 ;
    }
    
    void printnumber()
    {
        cout << "Your Complex number is " << a << " + " << b << endl;
    }
 };
int main (){
    complex c1 (44 ,53);
    c1.printnumber() ; 
    
    complex c2 (90);
    c2.printnumber() ; 
    
    complex c3;
    c3.printnumber() ; 

 
 
 
    return 0;
}