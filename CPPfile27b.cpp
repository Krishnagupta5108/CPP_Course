#include <iostream>
using namespace std;
  
class point {
int x , y ; 

public :
point (int , int) ; 

void print(void) { 
    cout<<"Your Point on Cartessian plane is "<<"("<<x<<","<<y<<")"<<endl;

}


};
point :: point( int a , int b ) {
    x = a ; 
     y = b ; 
}
int main (){

    point m(8,2) ; 
    m.print();

    point n(12 ,5) ; 
     n.print() ; 
     
 
 
 
    return 0;
}