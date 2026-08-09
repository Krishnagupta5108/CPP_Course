#include <iostream>
using namespace std;
 
class y ;  

 

class X{
    friend void add(X , Y );
    int value ; 
    public :
    
    void setVal1(int val1)
    {
        value = val1;
    }
};

class Y {
    int num ; 
    friend void add(X , Y );
    public :
    
    void setVal2(int val2)
    {
        num = val2;
    }
};

void add(X a ,Y b ){
    cout<<"Addition of the two number is "<< a.value + b.num ; 
} 


int main (){
    X ob1 ; 
ob1.setVal1(2 ) ; 
Y ob2 ; 
ob2.setVal2( 90) ; 

add(ob1 , ob2 ) ; 


    return 0;
}