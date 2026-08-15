#include <iostream>
using namespace std;
 
int main (){
    
int e , m , s ,g , h ; 
    cout<<" Enter your marks in English , Maths , Science , S.S.T and hindi :  "<<endl;
    cin>>e >> s >> m >> g >> h ;

    int result = (e + h + m + s + g)/5;
    cout<<"Your total Marks is "<<(e + h+ m + s + g )<<endl;
    cout<<"Your Percentage  is "<<float(result)<<endl;

 
 
 
    return 0;
}