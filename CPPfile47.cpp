#include <iostream>
using namespace std;

class Baseclass
{

public:
    int var_Base;
    void display()
    {
        cout << "Displaying Base class var_base " << var_Base << endl;
    }
};

class Derivedclass : public Baseclass
{

public:
    int var_Derived;
    void display()
    {
        cout << " \n\n Displaying Base class var_Base " << var_Base << endl;
        cout << "Displaying Derived class var_Derived " << var_Derived << endl;
    }
};

int main()
{

    Baseclass obj_Base;
    Derivedclass obj_Derived;

    Baseclass *Baseclass_pointer; // Pointing base class pointer to derived class

    Baseclass_pointer = &obj_Derived;

    // (*Baseclass_pointer).display() ;  for example to remember    about the pointer in objects

    Baseclass_pointer->var_Base = 43;
    // Baseclass_pointer-> var_Derived = 343; // this will throw an error
    Baseclass_pointer->display();

    Derivedclass *Derivedclass_pointer; // Pointing base class pointer to derived class
    Derivedclass_pointer = &obj_Derived;
    Derivedclass_pointer->var_Base = 120;
    Derivedclass_pointer->var_Derived = 120120;
    Derivedclass_pointer->display();

    return 0;
}