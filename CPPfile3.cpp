// There are two type of the header files :
// 1.  System header files : its comes with the compiler 
#include <iostream>
// 2. User defined header file 
// #include "filename.h"  runs if in the same directory 
using namespace std ; 
// This is used not to use std::cout or anything  many time in program 
int main(){
cout<<"hello wolrd "<<endl;

cout<<"Operators in c++:"<<endl;
cout<<"1.Following are the Arithmetic Operators"<<endl;  // 1.  Arithmetic Operators 
int a = 10 , b =2 ; 


cout<<"a = 10 , b =2" <<endl; 

cout<<"The value of a + b is "<<(a + b)<<endl;
cout<<"The value of a - b is "<<(a - b)<<endl;
cout<<"The value of a * b is "<<(a * b)<<endl;
cout<<"The value of a / b is "<<(a / b)<<endl;
cout<<"The value of a % b is "<<(a % b)<<endl;
a++;
cout<<"The value of a ++ is "<<a<<endl;
a--;
cout<<"The value of a -- is "<<a<<endl;
++a;
cout<<"The value of ++a is "<<a<<endl;
--a;
cout<<"The value of --a is "<<a<<endl<<endl;

/*
2. Assignment Operator generally use for give values to the varibles 
int a = 34 , b = 234  ; 
char d = 'D'  */


// 3. Comparison Operators 
cout<<" 3. Following are the Comparison Operators "<<endl; 

cout<<"The value of a == b is "<<(a == b)<<endl;
cout<<"The value of a != b is "<<(a != b)<<endl;
cout<<"The value of a > b is "<<(a > b)<<endl;
cout<<"The value of a < b is "<<(a < b)<<endl;
cout<<"The value of a >= b is "<<(a >= b)<<endl;
cout<<"The value of a <= b is "<<(a <= b)<<endl;


// 4. Logical Operators 
cout<<" 4. Following are the Logical Operators "<<endl; 

cout<<"The value of (a == b) && (a>b) is "<<((a == b) && (a>b))<<endl; // AND 

cout<<"The value of (a != b) || (a == b)is "<<((a != b) || (a == b))<<endl;          // OR  

cout<<"The value of (a <= b) is "<<(!(a <= b))<<endl;          // NOT







system("pause");
  // return 0; 

}
