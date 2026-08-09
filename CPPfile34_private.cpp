#include <iostream>
using namespace std;

class base
{

protected:
    int a;

private:
    int b;

public:
    int c;
};

class derived : private base
{
};

/*
    Class derived as     | Public declaration | Private declaration | Protected declaration

    1. Private members   |  not inherited     | not inherited       | not inherited
    2. Public members    |  Public            | private             | protected
    3. Protected members |  Protected         | private             | protected                                                                    |

*/
int main()
{
    base b;
    derived d;

    // cout << b.a;  give error
    // cout << d.a;  give error

    // cout << b.b;  give error
    // cout << d.b;  give error

    cout << b.c;
    // cout << d.c;  give error

    return 0;
}