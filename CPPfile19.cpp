#include <iostream>
#include <string>
using namespace std;

class binary{
    string s;
    
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void){
cout<<"Enter a Binary number ";
cin>>s; 
}

void binary ::chk_bin(void){
             for (int i = 0; i < s.length() ; i++) {

    if(s.at(i) != '0' && s.at(i) != '1'){
         cout<<"Invalid not a binary";
         exit(0);
    }
 }
 
}

void binary :: ones(void){
    for (int i = 0; i < s.length(); i++){
if (s.at(i) == 0)
{
    s.at(i) = '1' ; 
}

else  

    s.at(i) = '0' \;
}
    }

      
void binary ::display(void)
    { cout<<"Displaying your Binary number :";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i) ;


    } 
    cout<<endl; 

}

int main()
{
    // OPPS - classes and object
    // C++ --> initially called -->  C with object

    // class -->extension of structure (in C)
    // limitation of the structure
    //                     --> members are public
    //                     --> no methods

    // classes --> structure + more
    // classes --> can have methods and properties
    // classes --> can make few member as private and public




    binary b ; 
    b.read() ;
    b.chk_bin();
    b.ones() ; 
    b.display();
    return 0;
}