#include <iostream>
using namespace std;

class Baseclass
{

public:
    int var_Base;
    void display()
    {
        cout << "1 Displaying Base class var_base " << var_Base << endl;
    }
};

class Derivedclass : public Baseclass
{

public:
    int var_Derived;
    void display()
    {
        cout << " \n\n 2 Displaying Base class var_Base " << var_Base << endl;
        cout << "   2 Displaying Derived class var_Derived " << var_Derived << endl;
    }
};

int main()
{

    Baseclass obj_Base;
    Derivedclass obj_Derived;

    int a = 1  , b = 2 ; 
     obj_Base.var_Base = a  ; 
     obj_Derived.var_Derived = b ; 
    obj_Base.display() ;
    obj_Derived.display(); 


    
    Baseclass *Baseclass_pointer; // Pointing base class pointer to derived class

    Baseclass_pointer = &obj_Derived;

    /*
    above lines can be understand by this 

    int obj_Base;
    int obj_Derived ; 
    int *Baseclass_pointer ;
    Baseclass_pointer = & obj_derived ; 
    */

   // (*Baseclass_pointer).display() ;  for example to remember    about the pointer in objects
   
   // Baseclass_pointer->var_Base = 43;
   (*Baseclass_pointer).var_Base = 43;
   // Baseclass_pointer-> var_Derived = 343; // this will throw an error
   Baseclass_pointer->display();

   

// ### case 2    baseclass pointer points to baseclass object 
   
   Baseclass_pointer = & obj_Base;
   (*Baseclass_pointer).var_Base = 404;
//    Baseclass_pointer-> var_Derived = 343; // this will throw an error
    Baseclass_pointer->display();

   // Derivedclass_pointer = & obj_Base; // this will throw an error 
   // Derivedclass_pointer->display() ; 

    Derivedclass *Derivedclass_pointer; // Pointing base class pointer to derived class
    Derivedclass_pointer = &obj_Derived;
    Derivedclass_pointer->var_Base = 120;
    Derivedclass_pointer->var_Derived = 120120;
    Derivedclass_pointer->display();
    


                    
 
    // return 0;
    system("pause");
}