#include <iostream>
using namespace std;
 

int main (){
    
    int a , b  ; 
    char ch ;

    cout<<"Enter a , s , m & d for addition , substraction , multiplication and division : ";
    cin>>ch ; 

    cout<<endl ; 

    cout<<"Enter first and second number for calcultion : "<<endl;
    cin >>a >> b ; 
     
    
    switch ( ch)
    {
    case 'a' :
        cout<<"The addition is "<<a <<" + "<<b<<" = "<< (a + b )<<endl;        
        break;

    case 's' :
        cout<<"The substraction is "<<a <<" - "<<b<<" = "<< (a - b )<<endl;        
        break;

    case 'm' :
        cout<<"The muliplication is "<<a <<" * "<<b<<" = "<< (a * b )<<endl;        
        break;

    case 'd' :
        cout<<"The dividion is "<<a <<" / "<<b<<" = "<< (a / b )<<endl;        
        break;
    
    default:
        break;
    }
 
 
    return 0;
}