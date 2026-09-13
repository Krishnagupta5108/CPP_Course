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
    cout << "Your rollnumber is " <<roll_number ;
}

class exam : public student
{ 
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

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
{int r , m ,  p ;
    cout<<"Enter roll number , maths and physics";
    cin>>r >> m >> p ; 
    result krishna ; 
    krishna.set_rollnumber(r);
    krishna.set_marks(m , p );
    krishna.display() ;

    // return 0;
    system("pause");
}