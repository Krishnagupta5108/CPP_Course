#include <iostream>
using namespace std;



    int average1(int a , int b )
{
   
    int average = (a + b )/ 2 ; 
    return average ; 

}


    float average2(float x , float y )                                 
{
   
    float average = (x + y )/ 2 ; 
    return average ;

}

template <class T1, class T2>

float average(T1 x, T2 y)
{

    float average = (x + y) / 2;
    return average;
}


    template <class T>
    void SwapFunct ( T &a , T &b )
    {
        T temp = a ; 
        a = b ; 
        b = temp ; 
    }
 

int main (){
        

    int a  , b  ; 
    cout<<"Enter the value of the a "<<a<<endl;
    cout<<"Enter the value of the b "<<b<<endl;
    
    average1(  a , b   ) ; 
    

    float x  , y  ; 
    cout<<"Enter the value of the x "<<x<<endl;
    cout<<"Enter the value of the y "<<y<<endl;
    
    average2(  x , y   ) ; 

    //   ***********USING FUNCTION TEMPLATE     *********************   


    float Result = average(4 , 5) ; 
    cout<<"Result = "<<Result <<endl ; 

 



    int a1 , b1 ; 
    SwapFunct( a1 , b1 ) ;
    cout<<"The value of the a1 is  "<<a<<endl;
    cout<<"The value of the b1 is  "<<b<<endl;


    float x1 , y1 ; 
    SwapFunct( x1 , y1 ) ;
    cout<<"The value of the x1 is  "<<x1<<endl;
    cout<<"The value of the y1 is  "<<y1<<endl;

    char m , n ; 
    m = 'A ' ; 
    n = 'B ' ; 
    SwapFunct( "m" , "n" ) ;
    cout<<"The value of the m is  "<<m<<endl;
    cout<<"The value of the n is  "<<n<<endl;
     
  
    // return 0;
    system("pause");
}
 
 
 
 





 

