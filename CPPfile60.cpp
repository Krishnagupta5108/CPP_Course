#include <iostream>
using namespace std;

template <class T>
class krishna
{

public:
    T data;
    krishna(T s)
    {
        data = s;
    }
    void display(void){
    cout << "The data is " << data << endl; }

};

 


void Func(int a)
{
    cout << "This is normal Func function ()" << a << endl;
}






template <class T>
void Func(T a)
{
    cout << "This is Templatized Func function ()" << a << endl;
}




template <class T>
void Func1(T a)
{
    cout << "This is Templatized Func1 function ()" << a << endl;

}



int main()
{

    krishna<string> K("Hii, how are you ?");  
        K.display()  ;
        K.display()  ;
        K.display()  ;

    Func(34); // Exactly the normal Func with int will called which is at line 18
    Func1("hello");
 
    system("pause");
    // return 0;
}





























































