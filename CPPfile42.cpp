#include <iostream>
using namespace std;
 
int main (){

    //  basic example 

    int a = 44 ;
    int* ptr  = &a ; 

    cout<<"The value  of a is "<<*(ptr)<<endl;
    
    // new operator 
    
    int * p = new int(4) ; 
    // float  * p = new float (4) ; 
    cout<<"The value  at the address p is  "<<*(p)<<endl;

    int *array = new int [3] ;   
    array[0 ] = 1 ;
    array[1 ] =10 ;


    array[2] =20 ;


    
    cout<<"The value of array[0] is "<<array[0] <<endl;                                                                                 
    cout<<"The value of array[1] is "<<array[1] <<endl;                                                                               
    cout<<"The value of array[2] is "<<array[2] <<endl;
    
    
    // delete operator
    
    // syntax for it
    // delete array  ; 
    
    // delete array [] ; 
    
    delete array  ;
    // below like the upper call these will print actual value that is present but now on using
    // the delete operator the the actual values will not be printed  
    //

    cout << "The value of array[0] is " << array[0] << endl;
    cout << "The value of array[1] is " << array[1] << endl;
    cout << "The value of array[2] is " << array[2] << endl;
    cout << "The value of array[3] is " << array[3] << endl;
 
    // return 0;

    system("pause");
}

 
 


 