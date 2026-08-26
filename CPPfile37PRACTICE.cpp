#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 two class :
  1. Simplecalculator
  2. Scientificcalculator
   
   3. Hybridcalculator

*/

class simple_calculator{
 
     public :
     int a , b ; 
     void getdataC(int x , int y ){ 
            a = x ; 
            b = y ;
     }
     void show ( ){
        cout<<"The addition of the a and b is "<<(a + b ) <<endl;
        cout<<"The substraction of the a and b is "<<(a - b )<<endl ;
        cout<<"The multiply of the a and b is "<<(a * b ) <<endl;
        cout<<"The division of the a and b is "<<(a / b ) <<endl;
     }
};

class sciencetific_calculator    
{
    public : 
       double v ; 
       
      
       void showS(){

           cout << "Enter the value to calculate trigonometric and log function " << endl;
           cin >> v;
           
           cout << "The value of the Sin(" << v << ") is " << sin(v)<<endl;
           cout << "The value of the cos(" << v << ") is " << cos(v)<<endl;
           cout << "The value of the tan(" << v << ") is " << tan(v)<<endl;
           cout << "The value of the log(" << v << ") is " << log(v)<<endl;
        }
 
};

class Hybrid : public simple_calculator , public sciencetific_calculator 
{
    public : 
 
 
};

int main (){

    int x, y ;
    cout << "Enter the value to calculate  " << endl;
    cin>>x>>y;
             Hybrid a ;
             a.getdataC(x, y );
             a.show() ;
             a.showS() ;

             system("pause");
             // return 0;
}