#include <iostream>
using namespace std;
 
int main (){
    
    int a , b ,c ; 
    cout<<"Enter a , b and c : "<<endl;
    cin>>a>>b>>c;

    if(a > b  && a > c ) {
        cout<<"The greatest among is a ="<<a  ;
    }

    else if( b > c )
     {
        cout<<"The greatest among is b ="<<b  ;
        
    }

    else 
    {
        cout<<"The greatest among is c ="<<c  ;
        
    }
    

    /*
    if ( a > b )
    {
        
        if ( a > c )
        {
            cout<<"The greatest among is a ="<<a  ;

        }
    } 

    else if ( b > c )
    {
        cout << "The greatest among is b =" << b;
    }

    else 
    {
        cout << "The greatest among is c =" << c;
    } */ 
    return 0;
}