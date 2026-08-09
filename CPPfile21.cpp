#include <iostream>
using namespace std;
 
class employee{
    int id ; 
    // int count = 1 ; 
    static int count  ;  // its always start form 0  
                        //  its memory allocate only once then changes for every object

    public :

    void setData(){

        cout<<"Enter ID of the employee"<<endl;
        cin>>id ;
        count ++ ;            

    }
    void getData(){
        cout<<"The ID of the employee is "<<id<<"and the employee number is "<<count<<endl;

    }
    
    static int getcount(void){
        // cout<<id ;             throws error only accept static 
        cout<<"The value of the count is "<<count << endl ;   
    }
};
int employee :: count  ;     

int main (){

    employee a , b , c, d;

    a.setData() ;
    a.getData();
    employee :: getcount() ; 
    
    b.setData();
    b.getData();
    employee :: getcount() ; 
    
    c.setData();
    c.getData();
    employee :: getcount() ; 

    return 0;
}                             