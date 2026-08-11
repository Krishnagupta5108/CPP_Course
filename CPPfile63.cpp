#include <iostream>
#include <vector>
using namespace std;

//  *************Vectors in C++ STL________________________________________

template <class T>
void display(vector<T> &v1)
{
    cout<<"Display"<<endl<<endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " \t ";
    }
    cout << endl;
}


int main()
{


    // ##################### First way to create a vector in C++ STL ########################

    vector<int> vec1; // Zero length interger vector
    int element, size;

    cout << "Enter the size of the vector :-";
    cin >> size;

    cout << "Enter the elements of the vector :-" << endl;

    for (int i = 0; i < size; i++)

    {
        cout << "Enter an element to add to this Vector vec1" << endl;
        cin >> element;
        vec1.push_back(element);
    }

    display(vec1);



    //   ********** Example of pop_back() function in C++ STL

    vec1.pop_back(); // to remove the last element of the vector
    display(vec1);



    //   ********** Example of size() function in C++ STL

    cout << "Size of the vector: " << vec1.size() << endl; // to get the size of the vector



    //   ********** Example of insert() function in C++ STL

    vector<int>::iterator it = vec1.begin(); // to get the address of the first element of the vector
    vec1.insert(it + 1, 100);                // Insert 100 at index 1  because index starts from 0 ,
    cout << "After inserting 100 at index 1:" << endl;
    // there for after 1 there will 100 , to insert at the specific location we have to mention the address
    display(vec1);



    //   ********** Example of insert() function in C++ STL

    vec1.insert(vec1.begin() + 1, 100);
    cout << "After inserting 100 at index 1:" << endl;
    display(vec1);



    //   ********** Example of insert() function with values mulitple times  in C++ STL
    
    vec1.insert(vec1.begin() , 10, 100); // Insert 100 at index 1 10 times , in middle of the vector
    cout << "After inserting 100 at index 1, 10 times:" << endl;
    display(vec1);
    
    vec1.insert(vec1.end() , 10, 100); // Insert 100 at last index  10 times , in middle of the vector
    
    
    //   ********** Example of erase function   in C++ STL
    
    vector<int>::iterator it1 = vec1.begin(); // to delete the element from the address of the vector
    vec1.erase( it1 + 2);
    display(vec1);

    




    // ##################### Second way to create a vector in C++ STL ########################
    vector<char> vec2(4); // 4 element character vector
    display(vec2);




    // ##################### Third way to create a vector in C++ STL ########################
    vector<char> vec3(vec2); // 4 element character vector  from vec2 vector
    display(vec3);

    

    // ##################### Fourth way to create a vector in C++ STL ########################
    vector<int> vec4(6, 3); // 6 element integer vector with all elements initialized to 3
    display(vec4);

    return 0;
}