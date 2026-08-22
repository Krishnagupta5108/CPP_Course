#include<iostream>

using namespace std ; 

int c = 44 ; 
int main (){

// ********** Build in  datatypes***********************************************************

int a , b , c; 

cout<<"The values of the a is "<<endl;
cin>>a;
cout<<"The values of the b is "<<endl;
cin>>b;

c = a  +  b ; 

cout<<"The value of the c is "<<c<<endl;

cout<<"The value of the global c is "<<(::c);

// *********************** float , double and long double Literals *************************************

float d = 34.4f ;
long double e = 34.4l ;

//  34.4 it will taking as the double

cout<<"The value of the float is "<<d<<endl;
cout<<"The value of the long double  is "<<e<<endl;

cout<<"The size of the float is"<<sizeof(34.4)<<endl;
cout<<"The size of the float f is"<<sizeof(34.4f)<<endl;
cout<<"The size of the float F is"<<sizeof(34.4F)<<endl;
cout<<"The size of the long double  is"<<sizeof(34.4)<<endl; // here the 34.4 is taken as double becaue here is not mention about the variable datatype 
cout<<"The size of the long doublel is"<<sizeof(34.4l)<<endl;
cout<<"The size of the long double L is"<<sizeof(34.4L)<<endl;



// *********************** REFERENCE VARIBLES *************************************
//  NAITIK----> VEER ------> BHAI ------>

float x = 342;
 float & y = x ; 
cout<<"The value of the x  is "<<x<<endl;
 
cout<<"The value of the y  is "<<y<<endl;
 


 // ***********************  TTPECASTING *************************************

 int m = 45 ; 
 float  n = 45.99 ;  
 
 cout<<"The value of the m is "<<m<<endl;
 cout<<"The value of the n is "<<n<<endl;

 cout<<"The value of the (float)m is "<<(float)m<<endl;
 cout<<"The value of the float(m) is "<<float(m)<<endl;

 cout<<"The value of the (int)n is "<<(int)n<<endl;
 cout<<"The value of the int(n) is "<<int(n)<<endl;

cout<<"The value of the m + n is "<<m + n<<endl; 
cout<<"The value of the m + (int)n is  "<<m + (int)n<<endl;
cout<<"The value of the m + int(n) is  "<<m + int(n)<<endl;

    return 0;   
}



























