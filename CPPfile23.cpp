#include <iostream>
using namespace std;
 
class complex {
int a , b ; 

public :

// Below means that sumcomplex  is not member function but it is a
// allow to used private part 
friend complex sumcomplex(complex x1 , complex x2 ) ; 
void setnumber ( int x  , int y ){
    a = x ; 
    b = y ; 
}

void printnumber (){
    cout<<"Your Complex number is "<<a<<" + "<<b <<endl;
}
complex sumcomplex(complex x1 , complex x2 ){      // This will trow if above
    complex c3;                                   //  Friend function is not declared
    c3.setnumber((x1.a + x2.a), (x1.b + x2.b))  ; 
    return c3; 
    }

}; 
int main (){
    complex c1 , c2 , sum ; 
    c1.setnumber( 1 , 4 ) ; 
    c1.printnumber() ;
    // c1.sumcomplex()  ;  invalid because sumcomplex is not a member function of the class complex 
    
    c2.setnumber( 2 , 3 ) ; 
    c2.printnumber() ;

    sum = sumcomplex(c1 , c2 )  ; 
    sum.printnumber() ; 
 
    return 0;
}

/* Properties of the friend functions 
1. Not in the scope of the class. 
2. Since it not in the scope of the class , it cannot be called from the objecjt    
  of the class eg . c1.sumcomplex( 3 , 5 ) ;
3. Can be invoked with help of any object.
4.Usually contians objects argument.
5.Can be declared in both public and private.
6.It cannot access the member directly  by there name and need object_name.member_name
to access the members.


*/