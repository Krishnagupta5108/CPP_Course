#include <iostream>
using namespace std;
 
//  Functions overloading ------------------------------------------------------------------->
int add(int a , int b ){
     cout<<"The sum of the a and b is ";
return a + b ; 
}
int add(int a , int b , int c ){
    return a + b + c ; 
}   

int volume(int a , int b  , int c ){
    return a * b * c;    // cubiod
    
}

int volume(double r, int h) // cylinder
{
    return 3.14529*r*r*h;
}
int volume(int r){
    return (4*r*r*r)/3 ;  // sphere
}

int main (){
 int a ,  b ; 
 cout<<"Enter a and b is ";
 cin>>a>>b;
 cout<<add(a , b ) ;

 int x , y , z ; 
 cout << "Enter x  , y and z "<<endl;
 cin >> x  >> y >> z;
 cout << add(x,y, z);

 cout << volume(3, 4, 5) << endl;
 cout << volume(3.1, 5) << endl;
 cout << volume(3) << endl;
 return 0;
}