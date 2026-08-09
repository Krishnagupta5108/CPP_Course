#include <iostream>
using namespace std;
 
int main (){

    //  What is Pointer? ---------------> Pointer is a data type which holds the address of the other data types
    //  for example In Hotel when entry you alloted a room with room number , the varible 'a' the
    //  person who goes to hotel then the address of the 'a' is the room number which 'b' holds 
    int  a =4;
    int* b = &a ;
//  & ------------> Address of Operator
cout<<"The address of a is "<<b<<endl;
cout << "The address of a is " <<&a<< endl;

//  *  ------------> Value at the address which it store (Dereference) of the datatype

cout << "The value at the  address which b holds  is " << *b << endl;

// Pointer to Pointer ----------------->

int** c = &b ;
cout << "The address of b is " << c << endl;
cout << "The address of b is " << &b << endl;
cout << "The value store at the address of address which c hold is " << **c << endl;

return 0;
}

