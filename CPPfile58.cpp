#include <iostream>
using namespace std;

// **************_______________TEMPLATE WITH DEFALUT PARAMETERS__________________-***********************

template <class T1 = int , class T2 = float , class T3 = char >
        class krishna {

            public : 
            T1 data1 ;
            T2 data2 ;
            T3 data3 ;
            
            krishna (T1 a , T2 b , T3 c )
            {
                data1 = a ; 
                data2 = b ; 
                data3 = c ; 
            }
            
            void display (){
                cout<<"data1  = "<<data1<<endl ; 
                cout<<"data2  = "<<data2<<endl ; 
                cout<<"data3  = "<<data3<<endl ; 
            }
            
            
        } ; 
        
        
        int main (){
    // **************______IF we default parameters so live < > empty like given below__________________-***********************
   
    krishna < > k (65 , 'x' , 3.14) ;
    k.display() ;
    


    // **************_______If we want to specify all types explicitly__________________-***********************
    krishna <char , char , float >   z ('x' , 'x' , 3.14) ;
    z.display(); 
     
    



    return 0;
}