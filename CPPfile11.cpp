#include <iostream>
using namespace std;

// ************ Example of the structure -------------------------->
struct employee
{
    int eID;
    char Favchar;
    float salary;
};

// ______ another way to use structure __________________
//  typedef struct employee
// {
//     int eID;
//     char Favchar;
//     float salary;
// }emp;
//______________________________________________________________________________________________________________


// ************ Example of  Union  -------------------------->
union car
{
    int engine ;
    char color ; int s ;
    float model ;

};


int main (){
    
    // ************ Example of the structure -------------------------->

    struct employee bittu ;
    bittu.eID = 32 ;
    bittu.Favchar = 'K' ;
    bittu.salary = 1283292842 ;

    cout<<"The value of the eID "<<bittu.eID <<endl;
    cout<<"The value of the Favchar "<<bittu.Favchar <<endl;
    cout<<"The value of the salary  "<<bittu.salary <<endl;

//     emp krishna ;
//     krishna.eID  = 321 ;
// cout<<"The ID of the krisha is "<<    krishna.eID  = 321 ;

// __________________________________________________________________________________________________________



    // ******************** Example of  Union-------------------------------------------------------------->

    union car Buggati ;
    Buggati.engine = 5000 ; 
    Buggati.color = 'B' ;  
    Buggati.model = 7.3 ; 
 
    cout << "The model of Buggati  "<<Buggati.engine<<endl;
    cout << "The model of Buggati  "<<Buggati.color<<endl;
    cout << "The model of Buggati  "<<Buggati.model<<endl;
// ______________________________________________________________________________________


// *****************______________ Enum_____________________*********************************

    enum Meal { breakfast , lunch , dinner }  ;

    cout << "breakfast = " << breakfast;
    cout << "lunch  = " <<lunch;
    cout << "dinner =" << dinner;
    
    cout << "dinner ==2 " << (dinner==2);
    cout << " breakfast ==1 " <<( breakfast==1);
    
              return 0;
}



