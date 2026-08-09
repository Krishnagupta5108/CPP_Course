#include <iostream>
using namespace std;

// function prototyping -------------------------->

// int sum(int a , int b ) ; // Acceptable      
// int sum(int , int ) ; // Acceptable 
// int sum(int a , b ) ; // Not Acceptable 
int sum(int , int ) ; 
                //  ^ is imp 
// void  g(void );  // Acceptable  
void  g();  // Acceptable  


int main (){
    
    int x , y ;
    //   x and y are the actual parameters 
 cout<<"Enter the first number "<<endl;
 cin>>x;
 
 cout<<"Enter the second number "<<endl;
 cin>>y; 
 
 cout<<sum(x , y ); 
 
 return 0;
}

int sum(int a, int b)
{
    //  here a and b are the formal parameters 
    int c = a + b ;  
     
            return c;

}

    void g(void ){  
    cout<<"Hello , good morning ";
    }