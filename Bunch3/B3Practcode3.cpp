#include <iostream>
using namespace std;

// Fibbonacci series 

void fibbo(int n )
{
int first = 0  , second  = 1 , next ; 

for (int  i = 0; i < n; i++)

{
        cout<<first<<"\t\t";
        next = first + second ; 

        first = second ;
        second = next ; 
        
}


} 
int main (){
     int n ; 
     cout<<"Enter n " ; 
     cin>>n; 
     fibbo(n) ; 
 
 
 
    return 0;
}