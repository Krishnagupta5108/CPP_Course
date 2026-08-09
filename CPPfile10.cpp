#include <iostream>
using namespace std;

int main()
{
    //-------------------Arrays examle --------------------------------->

    int marks[] = {234,434,43,25,65,754,};

    int Mathmarks[] = {23,34,43,25,65,74,   };

    cout << "The below given are the Mathmarks:-" << endl;
    cout << "THe marks[0] is " << Mathmarks[0] << endl;
    cout << "THe marks[1] is " << Mathmarks[1] << endl;
    cout << "THe marks[2] is " << Mathmarks[2] << endl;
    cout << "THe marks[3] is " << Mathmarks[3] << endl;

    //  You can change the value of the array elements
    Mathmarks[2] = 832878723;

    //  By using loops how to print array elements

    for (int i = 0; i < 4; i++)
    {
        cout << "THe Mathmarks" << i << "is " << Mathmarks[i] << endl;
    }            

    //  Pointer in arrays

    int *p = marks;

    cout << " *(p++) " << *(p++) << endl;
    cout << " *(++p) " << *(++p) << endl;

    cout << "The value of the marks[0] or *p is " << *p << endl;
    cout << "The value of the marks[1] or *p+1 is " << *p + 1 << endl;
    cout << "The value of the marks[2] or *p+2 is " << *p + 2 << endl;
    cout << "The value of the marks[3] or *p+3 is " << *p + 3 << endl;

    return 0;
}