#include <iostream>
using namespace std;

class base1 {
    public :
    void greet(){
    cout<<"how are you ?" <<endl;
    }

};

class base2 {
    public :
    void greet(){
    cout<<"Kaise ho ?" <<endl;
    }

};
 
class derived : public base1 , public base2 {
int a ; 
     public : 

     void greet ( ){
        base1 :: greet() ; // We need to clarify which greet should be used if 
     }
     
};
class b1 {
    public :
    void say(){
    cout<<"Vande bharat"<<endl ;
    }

};

class b2 {
    public :
    void say (){
    cout<<"Jai hind" <<endl;
    }

};
 
class d : public b1 , public b2 {
int a ; 
     public : 
   // Here the derived is creating the same name funtion its over write it runs its own function
     void say ( ){
         cout << "Bharat Mata ki Jai"<<endl;
    }
     
};
int main (){


    //AMBIGUITY  1

    base1 base1obj;
    base1obj. greet();  
    
    base2 base2obj;
    base2obj. greet(); 
 
    derived derivedobj ;
    derivedobj .greet() ;  // Here compiler confuse to call greet from bases 1 or greet from the base2
 

    // AMBIGUITY  2 

    b1 b1;
    b1. say();  
    
    b2 b2;
    b2. say(); 
 
    d  d2 ;
    d2 .say() ;  // here will run there own say function and ignoring the inherited function from the base 

    return 0;

}     
/*








































*/