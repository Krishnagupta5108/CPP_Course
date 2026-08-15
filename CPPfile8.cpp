#include <iostream>
using namespace std;
 
int main (){
    // ******************Break statement*****************
// in break the compiler break at that moment or comes out of the loop 
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<endl;
    if (i==4)
    {
        break;} 
    }
             
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break; }
        cout << i << endl;
        
    }

    // ******************Continue  statement*****************

    //                              in continue the compiler skip or ignore 
    for (int i = 0; i < 10; i++) // the conditon what should be run that time 
                                //  according to the loop conditon
    {
        cout << i << endl;
        if (i == 4) {                     
            continue;}
    }
    return 0;
}                    