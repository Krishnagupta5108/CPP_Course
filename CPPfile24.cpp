#include <iostream>
using namespace std;

class complex ;  // Forward declaration *******************************************************************************************

class calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealcomplex (complex , complex ); // like function prototyping 
    int sumCompcomplex (complex , complex ); // like function prototyping

    };
    class complex
    {
        int a, b;

    public:
        void setnumber(int x, int y)
        {
            a = x;
            b = y;
        }
        // //       Individually  making  Friend--------------

        // friend int  calculator :: sumRealcomplex(complex , complex );
        // friend int  calculator :: sumCompcomplex(complex , complex );


        //        Entirely Class  making friend--------------

        friend class calculator;

        void printnumber()
        {
            cout << "Your Complex number is " << a << " + " << b << endl;
        }
 
};
 
   int calculator :: sumRealcomplex (complex o1 , complex o2 ){

    return o1.a + o2.a ; 
   }
 
   int calculator :: sumCompcomplex (complex o1 , complex o2 ){

    return o1.b + o2.b; 
   }
  
    

int main (){
    complex x , y ; 
    x.setnumber(1 ,4 );
    y.setnumber(8 ,2 );

    calculator ob ; 

    int resultR = ob.sumRealcomplex(x ,y) ;
    cout<<"The sum of the real part of complex number x and y is "<<resultR<<endl; 

    int resultC = ob.sumCompcomplex(x ,y) ;
    cout<<"The sum of the real part of complex number x and y is "<<resultC<<endl; 
    
    cout<<"The sum of Complex number x and y is "<<resultR<<" + "<<resultC<<"i"<<endl; 
    
    return 0;
}