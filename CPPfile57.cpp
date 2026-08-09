#include <iostream>
using namespace std;

// **************_______________TEMPLATE WITH MULTIPLE PARAMETERS__________________-********************************

/*


template <class T1 , class T2>

 class myclass {
    
    };
*/
template <class T1 , class T2>

 class myclass {
    public : 
    T1 data1 ; 
    T2 data2 ; 

    myclass (T1 a , T2 b )
{
    data1 = a ; 
    data2 = b ; 

}

     void display (){
        cout<<"data1  = "<<data1<<endl ; 
        cout<<"data2  = "<<data2<<endl ; 
     }

 }; 


int main (){
    
    myclass<int , char> obj (65 , 'x');
    obj.display();
 
 
 
    return 0;
}