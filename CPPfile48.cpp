#include <iostream>
using namespace std;

class Baseclass
{

public:
    int var_Base =1 ;
    void display()
    {
        cout << " 1 Displaying Base class var_base " << var_Base << endl;
    }
};

class Derivedclass : public Baseclass
{

public:
    int var_Derived = 2 ; 
    void display()
    {
        cout << " \n\n 2  Displaying Base class var_Base " << var_Base << endl;
        cout << " 2 Displaying Derived class var_Derived " << var_Derived << endl;
    }
};

int main (){

    Baseclass obj_Base;
    Derivedclass obj_Derived;

    Baseclass *Baseclass_pointer;  
    
    //  Baseclass_pointer = &obj_Derived;
    // ^
    // |
    // |
    //  Baseclass_pointer ->display(); //  this will normally runs the base class display function
    //   but we want  to call display function from derived class we need to add virtual keyword in the
    //    base class display function and then it will call the derived class display function
    
    Baseclass_pointer = &obj_Derived; // we have added the virtual keywork so the derived class display function will call 

    return 0;
}