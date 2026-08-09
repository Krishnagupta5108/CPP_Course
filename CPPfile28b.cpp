#include <iostream>
using namespace std;
 
// default constructord
class simple {
int data1 ; 
int data2 ; 
int data3 ; 

public : 

simple (int a , int b = 4 , int c = 5 ){
    data1 = a ; 
    data2 = b ; 
    data3 = c ; 
}

void print () ; 

};
void simple ::  print () {
    cout<<" The value of the data1 , data 2 and data 3 is "<<data1 <<" , "<<data2 <<" and "<<data3 <<endl;
}



int main (){
    
 simple c1(12 ,13 ,14 ) ;             
 c1.print() ;
    
 simple c2(22, 33 ) ; 
 c2.print() ;
    
 simple c3(11) ; 
 c3.print() ;
 
    return 0;
}   