#include <iostream>
using namespace std;
 
int main (){
    
    float Shour ; 
    cout<<"Enter Your Salary for 1 Hour : "<<endl;
    cin>>Shour ; 
    
    int day ; 
    cout<<"Enter Days you Work  : "<<endl;
    cin>>day ;
    
    float salary ; 
    salary = Shour * 6 ; 
    salary = salary*day;
    cout<<"Your Salary for this month will be "<<salary ;


 
 
 
    return 0;
}