#include <iostream>
#include <fstream>
using namespace std;

/*
The useful cases for working with files are as follows:
1. fstreambase class
2. ifstream  -> derived class from fstreambase class
3. ofstream  -> derived class from fstreambase class
*/

// In Order to work with files in C++, we have to include the header file <fstream>.
// There are two ways to open a file in C++:
// 1. Using the constructor of the class
// 2. Using the member function open() of the class

int main()
{

    string st = " CWK ";
    // Opening files using constructor and writing to the file

    ofstream outFile("sample52cpp.txt"); // opening file using constructor
    outFile << st;                       // writing to the file

    // Opening file using constructor and reading from the file

    ifstream inFile("sample52cppB.txt"); // opening file using constructor
    string st2;                          // reading from the file
    inFile >> st2;                       // reading from the file

    getline(inFile, st2); // reading from the file
    // ^  Above we use getline to get a full line and to get next line
    // we can use getline again to get the next line from the file.

    return 0;
}


/*





*/