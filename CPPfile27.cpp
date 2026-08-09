
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    
    complex(int , int ); // Constructor Declaration

    void printnumber()
    {
        cout << "Your Complex number is " << a << " + " << b << endl;
    }
};

complex ::complex(int x  , int y ) // 
{  
    a = x;
    b = y;
}

    int main()
    { 
        // Implicit call 

        complex c(12 ,43);
        c. printnumber() ; 
        
         
        // Explicit call 

        complex d = complex(23 ,43) ; 
        d. printnumber() ; 

        return 0;
    }