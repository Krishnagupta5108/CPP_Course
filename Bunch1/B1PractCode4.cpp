#include <iostream>
using namespace std;
 
int main (){
    
    int unit ; 

    cout<<"Enter Your Unit of Electricity is used this month :"<<endl;
    cin>>unit; 

    float Bill ; 
    Bill = (unit * 10 ) ; 
    Bill +=( Bill*18)/100 ; 
    cout<<"Your Total Electricity Bill is "<<Bill<<endl;
 
 
    return 0;
}