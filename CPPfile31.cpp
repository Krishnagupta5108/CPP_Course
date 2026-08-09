#include <iostream>
using namespace std;
 int count = 0 ; 
class number {
    public : 
    //   Formation of the Constructor ***********************************    
    number  ( ) {
        count++ ; 
        cout<<"The is the time when the constructor for object number"<<count<<" ïs called "<<endl; 
    }
    
//   Formation of the Destructor ***********************************    
    ~number  ( ) {
        cout<<"The is the time when the Destructor  for object number"<<count<<" ïs called "<<endl; 
        count-- ; 
    }



};

int main (){
    cout<<"We are inside the main function "<<endl;
    cout<<"Now Creating thr first Object n1 ; "<<endl;
    
 number n1 ;
 {
     cout<<"We are Entering the Block "<<endl;
    cout<<"Creating two more objects "<<endl; 
    number n2 , n3  ; 
    cout<<"We are Exiting the Block "<<endl;
 }

 cout<<"Back to main "; 
 
 
    return 0;
}