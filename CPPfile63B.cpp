#include <iostream>                      
#include <conio.h>                      
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v1)
{

    cout << "display" << endl
         << endl;   
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " \t ";
    }
    cout << endl;
}
int main()
{
    vector<char> vec2(4); // 3 4 element character vector

    display(vec2);

    cout << "Size of the vector vec2: " << vec2.size() << endl;

    vector<char>::iterator it = vec2.begin();
    vec2.insert(it + 3, 'X');
    vec2.push_back('a');
    vec2.push_back('b');
    vec2.push_back('c');
    vec2.push_back('d');
    display(vec2);
    cout << "Size of the vector vec2: " << vec2.size() << endl
         << endl
         << endl
         << endl;

    vector<char> vec3(vec2); // Copy vec2 into vec3

    int size;     // Declare size
    char element; // Declare element

    cout << "Enter the size of the vector vec3: " << endl;
    cin >> size;



   for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this Vector vec3 : ";
        cin >> element;

        vec3.push_back(element);
    }





    cout << "Size of the vector: " << vec3.size() << endl;

    display(vec3);

    system("pause");
    // return 0;
}