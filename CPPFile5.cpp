#include <iostream>

#include <iomanip>
using namespace std; 
int main(){

// ******************* Constant********************* 
int a = 12;
 cout<<"The value of the a is "<<a<<endl;

a = 345 ;
 cout<<"The value of the a is "<<a<<endl;

const int b = 45;

 cout<<"The value of the b is "<<b;

// b = 789 ;         Constant values cannot be change once assigned , 
//                   if changed thes shows error 

//  cout<<"The value of the b is "<<b;


// ************************MANIPULATOR **************
//  For manipulator we need to use header file named as iomanip

int x = 23 , y =2234  , z =324535;

cout<<"The values of the x without setw is    "<<x<<endl;
cout<<"The values of the y without setw is    "<<y<<endl;
cout<<"The values of the z without setw is    "<<z<<endl;

cout<<"\n\nThe values of the x with setw is"<<setw(5)<<x<<endl;
cout<<"\n\nThe values of the y with setw is"<<setw(5)<<y<<endl;
cout<<"\n\nThe values of the z with setw is"<<setw(5)<<z<<endl;



// ********************* Operator Precedence **************** 
//  actually this is  about the preference , have to use a website for this 

int m = 43 , n =343; 
cout<<((m*433)+(n-324));

system("pause");
// return 0; 
}
