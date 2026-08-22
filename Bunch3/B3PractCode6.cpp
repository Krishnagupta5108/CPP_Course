#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0)
    {
        int rem = a % b;     // 20 15  #20/15 = 1._______ rem = 5| 15 5    # 15/5 = 5   , rem = 0 
        a = b;              //  15                               |  5                                      
        b = rem;           //   5                                |  0                      
    }

    cout << "GCD = " << a;

    return 0;
}