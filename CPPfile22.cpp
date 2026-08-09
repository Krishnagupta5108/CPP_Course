#include <iostream>
using namespace std;
 
class employee {
    int id ; 
    int salary ; 

    public : 
    void setId(void ){
        cout<<"Enter emplpyee  ID "<<endl;
        cin>>id;
    }

    void getId (void ){

        cout<<"The ID of the employee is "<<id<<endl;
    }


};

int main (){

    employee GOOGLE[5];
    for (int   i  = 0;  i  < 5;  i ++)
    {
        GOOGLE[i].setId() ;
        GOOGLE[i].getId() ;

    }
    
 
 
    return 0;
}