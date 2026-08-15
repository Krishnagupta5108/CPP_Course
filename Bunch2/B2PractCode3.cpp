#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int x,  y , z ;              

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    cout << "Enter three angles of triangle: ";
    cin >> x >> y >> z;



    // Check whether triangle is valid
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Not a valid triangle.";
        return 0;
    }


    
    // Create a code based on side equality
    int type;
    
    if (a == b == c  && x == y == z)
        type = 1; // Equilateral

    else if (a == b  || b == c || a == c)
        type = 2; // Isosceles
 
    else if (a != b && b != c && a != c)
        type = 3; // Scalene
  
    else if (x == 90 &&  (y + z) == 90 || y == 90 && (x + z) == 90 || z == 90 && (x + y) == 90)

        type = 4; // Right Triangle

    else if (x > 90 &&  (y + z) == 90 || y > 90 && (x + z) == 90 || z > 90 && (x + y) == 90)
        type = 5; // Obtuse Triangle

    else if (x < 90 && (y + z) == 90 || y < 90 && (x + z) == 90 || z < 90 && (x + y) == 90)
    {
        type = 6; // Acute Triangle
    }

    switch (type)
    {                                                      
    case 1:
        cout << "Equilateral Triangle";
        break;

    case 2:
        cout << "Isosceles Triangle";
        break;

    case 3:
        cout << "Scalene Triangle";
        break;
    
        case 4:
        cout<<"Right angles Triangl";
        break;
        
        case 5:
        cout<<"Obtuse  Triangl";
        break;
        
        case 6:
        cout<<"Acute Triangl";
        break;
        
    default:
        cout << "Invalid triangle type.";
    }

    
 
    return 0;
}