#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};

void student ::set_rollnumber(int r)
{
    roll_number = r;
}

void student ::get_rollnumber()
{
    cout << "Your rollnumber is " << get_rollnmber();
}

class exam : public student
{ 
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};u

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "Your marks in maths is " << maths << endl;
    cout << "Your marks in physics is " << physics << endl;
}

class result : public exam
{
// private:
//     float pecentage;

public:
    void display()
    {
        cout << "Your result is " << ((maths + physics) / 2);
    }
};

int main()
{
    result krishna ; 
    krishna.set_rollnumber(36);
    krishna.set_marks(94.0 , 95.0 );
    krishna.display() ;

    return 0;
}