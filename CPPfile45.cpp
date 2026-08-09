#include <iostream>
using namespace std;
 
class A {

    int a;
    public : 
    void setdata ( int a ) {
      this->a = a ;  // only using the simply a its give garbage value , this is used a pointer 
    }
    void getdata (void )
    {
        cout<<"The value of the a  "<<a<<endl ; 
    }
};

int main (){

    A a ;
    a .setdata( 334) ; 
    a.getdata() ;  


    return 0;
}

/*]









the the the the the the the the the the the the the the the the the the the the the the the the the 
the the the the the the the the the the the the the the the the the the the the the the the the the












*/