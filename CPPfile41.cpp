#include <iostream>
using namespace std;

/*

Syntax for the initialization list in Constructor :-


constructor (argument_list) : initialization-section
{
    assigment + other code ;
}
 

class Test {
    int a :
    int b; 
     
    public :
    Test (int i , i t j ) : a( i ) , b ( j ) {

    code
    }


    };

    */

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) :  b(j ) , a(i)
    // Test(int i, int j) : a(i), b( i + j)
    // Test(int i, int j) : a(i), b( 2 *  j )
    // Test(int i, int j) : a(i), b( a +   j )
    
    // Test(int i, int j) :  b(  j)  , a (i + b ) 
    // Above line is red flag because this will run but with the garbage value 
    // a is intialize the first than the b , so this happen and when the b is declared first then its runs perfectly  
    
    Test(int i, int j) :  b(  j)  
    {
        a = i ; 
        
         cout << "Constructor Executed " << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{   
    Test t(43, 99) ; 
    




    return 0;















}

/*
firends 
hii hello how are you what are you doing 
  hii hello how are you what are you doing
  hii hello how are you what are you doing


  hii hello how 
  hii hello how 
  hii hello how        
   
  hii hello how krishna gupta 
  krishna gupta krihna gupta 
  krishna gupta krishna gupta  
  krishna gupta krishna gupta 
  

  



  












*/
