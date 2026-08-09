#include <iostream>
using namespace std;

class c2;

class c1
{

    int val1;

    friend void exchange(c1 &, c2 &);

public:
    void invalue(int a)
    {
        val1 = a;
    }

    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{

    int val2;

    friend void exchange(c1 &, c2 &);

public:
    void invalue(int a)
    {
        val2 = a;
    }

    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &a, c2 &b)
{
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}
int main()
{
    c1 ob1;
    c2 ob2;

    ob1.invalue(21);
    cout << "The value of the c1 is ";
    ob1.display();

    ob2.invalue(11);
    cout << "The value of the c1 is ";
    ob2.display();

    exchange(ob1, ob2);

    cout << "The value of the c1 after the exchange  is ";
    ob2.display();

    cout << "The value of the c1 after the exchange  is ";
    ob2.display();

    return 0;
}