#include <iostream>
using namespace std;

// {Base Class}
class employee
{

public:
    int id;
    float salary;

    employee() {}

    employee(int inpID)
    {
        id = inpID;
        salary = 34;
    }
};

// Derived Class
/*
   class derived-Class_name  : visibility  based-Class_name
   {
   var, function, etc
   };
NOTE:-------------------------------------

1. Default visibility mode is Pivate.

2. Public visibility mode : "Public member" of the base class is becomes the "Public member" Public the Derived class.

3. Private visibility mode : "Public member" of the base class is becomes the "Private member" of the Derived class.

*/

// Derived Class Formation

class Programmer : public employee
{
public:
    int languagecode;
    Programmer() {}

    Programmer(int inpID)
    {
        id = inpID;
        languagecode = 99;
    }
    void showdata()
    {
        cout << id << endl;
    }
};

int main()
{

    employee em(1), em2(2);
    cout << em.salary << endl;
    cout << em2.salary << endl;

    Programmer skillF(11);
    skillF.showdata();
    skillF.id;

    return 0;
} /*
 krishna gupta karan gupta






 */