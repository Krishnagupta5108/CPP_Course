#include <iostream>
using namespace std;
 
int main (){
    
    int inr    ; 

    cout<<"Enter INR you have "<<endl ; 
    cin>>inr ; 
  

 float usd  = (1/100)  ; 
 float pnd  = (1/110)  ; 
 float euro  = (1/105)  ; 
 float ruble  = (1/50)  ; 
 float yen  = (1/80)  ; 



    cout<<"Your "<<inr<<" INR will be "<<double((inr)*(usd))<<" USD "<<endl; 
    cout<<"Your "<<inr<<" INR will be "<<double((inr)*(pnd))<<" POUND "<<endl; 
    cout<<"Your "<<inr<<" INR will be "<<double((inr)*(euro))<<" EURO "<<endl; 
    cout<<"Your "<<inr<<" INR will be "<<double((inr)*(ruble))<<" RUBLE "<<endl; 
    cout<<"Your "<<inr<<" INR will be "<<double((inr)*(yen))<<" YEN "<<endl; 



    return 0;
} 
