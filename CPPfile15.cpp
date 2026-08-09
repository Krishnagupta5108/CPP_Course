#include <iostream>
using namespace std;

// ******Recursion -------------------------------------------->
 
// Example of the recursion by explaining the factorial function 

int factorial(int n){
    if (n<=1) {
        return  1 ;
    }
return n*factorial(n-1);
}
// factorial(4) = 4*factorial(3)
// factorial(4) = 4*3*factorial(2)
// factorial(4) = 4*3*2*factorial(1)
// factorial(4) = 4*3*2*1s

// factorial(4) = 24

//  Example 2 to explain the recursion by explaining the fibonacci seriers
int fibonacci( int fib ){
    if(fib < 2){
        return 1 ; 
    }

    return fibonacci(fib - 2) + fibonacci( fib - 1 ) ; 
}
             

int main (){
    int f ; 
 cout<<"Enter number to find the Factorail :"<<endl;
 cin>>f;
 cout<<"The Factorail of "<<f<<" is : "<<factorial(f)<<endl;
//  
int fib ; 
cout<<"Enter number to find the Factorail :"<<endl;
cin>>fib;
 cout<<"The Factorail of "<<f<<" is : "<<factorial(f)<<endl;
 
 
    return 0;
}