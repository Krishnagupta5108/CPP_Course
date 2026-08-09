#include <iostream>
#include<fstream>
#include<string>

using namespace std;
 
int main (){

    ofstream out ; 
    out.open("sample52cpp.txt") ; 
    out<<"This is my name ";
    out.close() ; 

    ifstream in ; 
    in.open("sample52cpp.text  " ) ; 


    string st ; 


    // in>>st  ; 
    // cout<<st ; 
    while (in.eof() == 0 )
    {
        getline(in , st ) ;
        cout<<st<<endl ; 
        

    }
    
    
    in.close() ; 
    

    
    
 
 
 
    return 0;
}