#include <iostream>
using namespace std;

// Sybtax for the Multiple Inheritnace
/*
class derived : visibility base1 , visibility base2 {

};

*/


class base1
{
protected:
    int int1base;

public:
    void set_int1base(int a)
    {
        int1base= a;
    }   
};



class base2 
{
protected:
    int int2base ;

public:
    void set_int2base(int a)
    {
        int2base = a;
    }   
};


class derived : public base1 , public base2 {
  public :
  void show (){
    cout<<"The value of the int1base is "<<int1base <<endl ;
    cout<<"The value of the int2base is "<<int2base <<endl ;
    cout<<"The  the  sum of these values  is "<<(int1base + int2base) <<endl ;
  }

};
int main()
{  derived b ; 
     b.set_int1base( 64) ;
     b.set_int2base(32 ) ;
     b.show()   ;

    return 0;
}