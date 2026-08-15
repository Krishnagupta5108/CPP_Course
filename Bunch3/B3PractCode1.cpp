#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// Function to check if a string is a Amstrong

void Amstrong (int num)
{
    int rem , n  , temp = 0 ;
    n = num;

    for (int i = 0; i < 3; i++)
    {
        rem =  num%10  ; 
        temp = temp +  rem*rem ; 
        rem = 0 ; 
    }

    if ( n == temp ){
        cout <<"P";
    }

    else 
    cout<<"NO P ";
    ;
}

int main()
{ int num ; 
    cout<<"Num";
    cin>>num ; 

    Amstrong (num )  ; 

    return 0;
}
