#include <iostream>
using namespace std;

//*************   Call by value------------------------>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int *a, int *b)
{ // ( refer program 9)
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by refernce usind c++ refernce varible----------------------------->
// ( refer program 4)
void swapReferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Not necessary
// int &swapReferencevar(int &a , int &b ){
// int temp =  a ;
// a = b ;
// b = temp ;
// return a;
// }

int main()
{

    int x = 3, y = 7;
    cout << " The value of x  is " << x << "and the  value of the y is " << y << endl;

    // sawp(x , y ); // This will not swap the value _______________

    // Call by Value
    //  swapPointer(& x , & y ); // This will swap the value _______________

    // Call by Refernce
    swapReferencevar(x, y); // This will swap  the value     _______________

    cout << " The value of x  is " << x << " and the  value of the y is " << y << endl;

    // ---------_____**************_________*************______------------------

    //  swapReferencevar( x , y )=78213;

    // cout<<" The value of x  is "<<x<<" and the  value of the y is "<<y<<endl;

    // This will be the output-----> The value of x  is 78213 and the  value of the y is 7

    return 0;
}
