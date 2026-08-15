#include <iostream>
#include <cmath>
// Quadratic equation-------------------------------------------

using namespace std;
 
int main (){

    int a, b , c ; 
    cout << "Quadratic equation  aX + bX + c";
    cout << "Enter a , b & c as shown in the above quadratic equation to find the roots:"<<endl;
    cin>>a>>b>>c;
    
    int x1 , x2 ; 
    float delta = ((b^2) - (4*a*c)) ; 

    if (delta == 0 ){
        cout << "The Quadratic equation two equal real roots (a double root)." << endl;
    }

    else if (delta <0){
        cout << " The Quadratic equation  two complex conjugate roots (imaginary roots).";
    }
  
    else
        cout << "The Quadratic equation has two distinct real roots. ";
        x1 = ( (-b + sqrt(delta) )/(2*a) ) ;
        x2 = ( (-b - sqrt(delta) )/(2*a) ) ;

        ;

        // cout<<endl<<endl;
        // cout << "The value of the roots of the Quadratic equation is x1 = "<<x1<<" & x2 = "<<x2<<endl;
// 
        return 0;
}