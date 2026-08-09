#include <iostream>
using namespace std;

/*
case 1 :
class B : public A {
    
// Order of Execution of constructor--  Class A() --> Class B()

}


case 2 :
class A : public B , public C  {
    
// Order of Execution of constructor--  Class B( ) --> Class C( ) class A( )

};



case 3 :
class A : public B , virtual  public C  {
    
// Order of Execution of constructor--  Class C( ) --> Class B( ) class A( )

};

*/ 

class Base1 {
    int data1 ;

    public : 

    Base1 (int a ){
        data1 = a ; 
    }

    void printbase1(void ){
        cout<<"The value of the data of Base1 is "<<data1 <<endl ;

    }

};

class Base2{
    int data2 ;

    public : 

    Base2 (int a ){
        data2 = a ; 
    }

    void printbase2(void ){
        cout<<"The value of the data of Base2 is "<<data2 <<endl ;
        
    }
    
};

class derived : public Base1 , public Base2 {
    
    int d1 , d2 ;
    
    public : 
    
    derived ( int a , int b  , int c , int d  ) : Base1 (a ) , Base2 (b) {
        
        d1 = c ; 
        d2 = d  ; 
    }
    
    void printDerived (void ) {
        cout<<"The value of the data of Derived data 1  is "<<d1<<endl ;
        cout<<"The value of the data of Derived data 2  is "<<d2<<endl ;

    }
    /*
        void printDerived (void ) {
          void printbase1 ; 
          void printbase2 ; 
            cout<<"The value of the data of Derived data 1  is "<<d1<<endl ;
            cout<<"The value of the data of Derived data 2  is "<<d2<<endl ;

        }

    */
};


int main (){


    derived kree  (1 , 2 , 3 , 4 ) ;
    kree.printbase1() ;      
    kree.printbase2() ;      
    kree.printDerived() ;      
 
 

 
    return 0;
}