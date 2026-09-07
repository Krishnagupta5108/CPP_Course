#include <iostream>                                              
using namespace std;                                                       
int glo =243 ;                                                                      

int main() {                                                                
  int a = 12, b = 2;                                                                


  float pi = 3.14659;                                                  


  char car = 'B';                                       

  int glo = 2;                                                           
  glo = 4;                                                        
  cout << "This is the second code.\n The value of a = " << a
       << ".\n  The value of b   = " << b << endl
       << "The value of pi =" << pi;

  cout << "\nThe car is " << car << endl;                                       


  cout << "\nLocal glo :" << glo;
  cout << "\nGlobal glo :" <<:: glo<<endl;
  
  
  system("pause");
                  // return 0 ; 
}