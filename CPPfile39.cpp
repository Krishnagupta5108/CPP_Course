#include <iostream>
using namespace std;
/*
 
                        Student
                           |                          
                ___________|_________            
               |                     |
              TEST                 SPORT    
               |                     |
               |_____________________|                       
                           |
                           |
                          RESUlT

*/


class Student {  

    protected :
    int roll_number ;

    public :
    void set_roll_number (int r ){
       roll_number = r  ;
    }
    void Print_roll_number ( ){
       cout<<"Your ROLL number is "<<roll_number ;
    }  
};


class Test : virtual public Student
 {
    protected :
    float maths , physics ;

    public :
    void setmarks(float m1 , float m2 )
    {
        maths = m1 ;
        physics = m2 ;
    }

    void Printmarks(void)
    {
        cout << "Your maths marks is " << maths << endl;
        cout << "Your physics marks is " << physics << endl;
    }
 };



class Sport : virtual public Student 
{
    protected :
    float score ;

    public :
    void Set_score (float sc){
        score = sc ; 
    }
    void Print_score (){
        cout<<"Your PT score is "<<score <<endl;
    }

};

class Result : public Test  , public Sport  
{   int total ; 
    public :
    void Display (){
        total = maths + physics ;
        Print_roll_number ;
        Printmarks ; 
        Print_score ;
        cout<<"Your Total is : "<<total <<endl ;

    }


};


int main (){
    int r , m , p ;

    cout<<"Enter your Roll Number :"<<endl ;
    cin>>r ;
    
    
        cout<<"Enter your marks in maths :"<<endl;
        cin>>m;
    
        cout<<"Enter your marks in physics :"<<endl;
        cin>>p;



 Result obj ; 
 obj.set_roll_number(r) ;
 obj.setmarks(96 , 95 ) ; 
 obj.Set_score(8) ;
 obj.Display() ;
 
    return 0;
}


/*


 
*/