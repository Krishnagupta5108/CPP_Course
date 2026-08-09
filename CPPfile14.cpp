#include <iostream>
using namespace std;

// int product(int x , int y ){
// return x*y ;
// }

inline int product(int x, int y) // Inline funtion is used for one line program , and easy
{                                // program and don't try to make every function inline
    return x * y;                //  it used to make compiler time less
}

// inline int product(int x, int y) // Inline funtion is used for one line program , and easy
// {    static int c = 0 ;      // static variable is used only once ,on it initialisation
//                                 if there are so many call so the first time  only its work
//   c = c + 1 ;                 // program and don't try to make every function inline
//     return x * y + c;                //  it used to make compiler time less
// }

//--------------------------------------------------------------------------------------------------------------
float Bank(int money, float factor = 1.04)       // this is created for to explain the default argument 
{
    return money * factor;
}

//  --------------------------------------------------------------------------------------------
// int strlen(const char *p){         

// }


int main()
{
    int a, b;
    cout << "Enter the value of a and b " << endl;
    cin >> a >> b;

    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);
    cout << "The product of the a and b is " << product(a, b);

    // -----------------------------------------------------------------------------------------
    int money;
    cout << "If you have money " << money << "in your account then you will get after 1 year " << Bank(money);
    cout << "For VIP: If you have money " << money << "in your account then you will get after
     1 year" << Bank(money , 1.10);        // you can pass only one parameter using this condtion but you need to write it on right most 
                                          // This is by using the defalut parameter 
     
    return 0;
}