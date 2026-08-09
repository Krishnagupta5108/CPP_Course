#include <iostream>
using namespace std;

class employee
{

private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // Declaration

    void getData()
    {
                     
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    };                                                                              
};
void employee ::setData(int a1, int b1, int c1)
{

    a = a1;
    b = b1;
    c = c1;
}
int main (){
    employee karan;
    // karan.a = 23;  // makes error because a is in private part of the class 
    karan.d = 3214;   // can call in main funct because d and e are in public part of the class 
    karan.e = 32987;

    karan.setData( 32 ,55, 453);
    karan.getData();

    return 0;
} 