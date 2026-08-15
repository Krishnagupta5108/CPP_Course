#include <iostream>
using namespace std;

int main()
{

    int unit;

    cout << "Enter Your Unit of Electricity is used this month :" << endl;
    cin >> unit;



    // float Bill;
    // Bill = (unit * 10);
    // Bill += (Bill * 18) / 100;
    // cout << "Your Total Electricity Bill is " << Bill << endl;


    
    int type;
    float Bill;
    if(unit >=0 && unit <=100 ){
        type =1;   
    }

    else if (unit >100 && unit <= 200)
        type = 2 ;

    else if (unit > 200 && unit <= 400){

        type = 3 ; 
    }

    else 
    type= 4 ; 

    switch ( type)
    {
    case 1:

        
        Bill = (unit * 10);
         
        cout << "Your Total Electricity Bill is " << Bill << endl;
        break;

    case 2 :
        
        Bill = (unit * 10);
        Bill += (Bill * 5) / 100;
        cout << "Your Total Electricity Bill is " << Bill << endl;
        break;


    case 3 :

        
        Bill = (unit * 10);
        Bill += (Bill * 15) / 100;
        cout << "Your Total Electricity Bill is " << Bill << endl;
        break;

        case 4 :
        
        Bill = (unit * 10);
        Bill += (Bill * 20) / 100;
        cout << "Your Total Electricity Bill is " << Bill << endl;
        break;

    default:
        break;
    }







        return 0;
}