#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point ( int , int ) ; 

    // friend point :: point (int , int ) ; 
int getx() {
    return x ; }

    int gety() {
        return y ; }
    void print(void)
    {
        cout << "Your Point on Cartessian plane is " << "(" << x << "," << y << ")" << endl;
    } 
};

point ::point(int a, int b)
{int 
    x = a; 
    y = b;
}
int main()
{

    point m(1, 2);
    m.print();

    point n(1, 2);
    n.print();
    double dist = sqrt(((n.getx() - m.getx()) * n.getx() - m.getx()) + ((n.gety() - m.gety()) * (n.gety() - m.gety()))) ; 
    cout << "The Distance between the two Points is " << dist;

    return 0;
}
