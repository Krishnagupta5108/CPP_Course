#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array

int main()
{

    map<string, int> marksMap;

// __________________________________________    
//|             first           |   second   |      
    marksMap [" Krishna "     ]   =   99   ;
    marksMap [" Average "     ]   =   70   ;
    marksMap [" Backbencher " ]   =   40   ;
//|__________________________________________|    


    map<string, int>::iterator itr;

    //  int i ; 
    //  for(  i  =          0           ;   i  <=      count          ;   i++     ){}
    for( itr = ( marksMap.begin() ) ;  itr != ( marksMap.end() )  ;  itr++    ){
        
        
        cout<<  (*itr).first << "   " << (*itr).second <<" \n " ;
        
    }

    /*   IMPORTANT POINTS OF THE MAP

        key        value
         ↓          ↓
    "Krishna"      99
    "Average"      70
    "Backbencher"  40

    In the above marksMap , when we use this that is
    ###
    map<string, int>::iterator itr;

    itr = ( marksMap.begin() ) ;
    cout<<  (*itr).first << "   " << (*itr).second <<" \n " ;

    AVERAGE marks will print print first because in MAP the Elements are sort  , because of Key is sorted
    _______________________________________________________________
    |    1     |        2          |        3            |    4     |
    | Average  |  Backbencher      |     Krishna         |          |
    |    ^     |      ^            |        ^            |    ^     |
    |    |     |      |            |        |            |    |     |
    | begins() |   begins() + 1  , |     begins() + 2    |   end()  |
    |__________|___________________|_____________________|__________|

    BECAUSE the end()  points after the last Elements so in above for() loop the condition is like

    for( itr = ( marksMap.begin() ) ;  itr != ( marksMap.end() )  ;  itr++    ){

        cout<<  (*itr).first << "   " << (*itr).second <<" \n " ;

        }

        SO when the itr comes to end its stop therefore the element on end does not print or there is
        nothing to print to  ,
        so the for() loop works like for 1st condition for 1st element  with begins()  as in above table
        2nd  conition for 2nd element with begins() + 1                          because of itr ++ ;
        3rd  conition for 3rd element with begins() + 1 + 1                      because of itr ++ ;
        4th  conition its stop because condition matches begins() + 1 + 1 + 1    because of itr ++ ;
        end()


    THEREFORE to use end( )  we need to use itr-- ; which points just before the end( ) just like that

    itr--;
    itr = ( marksMap.end() )  ;
    cout<<  (*itr).first << "   " << (*itr).second <<" \n " ;
    IT will print krishna as it is last element



    */

    // ##   EXAMPLE OF  SIZE ( ) , MAX_SIZE ( )  AND EMPTY ( ) IN  MAP  ----------------------- 


    cout<<"The size of the map is : " << marksMap.size()<<endl;
    
    cout<<"The max_size of the map is : " << marksMap.max_size()<<endl;
    
    cout<<"The empty 's return value in  map is : " << marksMap.empty()<<endl;
    
    


    // ##    INSERT IN MAP ------------------------------------------

    marksMap.insert(  {   { " Tom " , 70 }  ,   { " Steve " , 50 }   }  ) ; 
    
    

    
    for( itr = ( marksMap.begin() ) ;  itr != ( marksMap.end() )  ;  itr++    ){


        cout<<  (*itr).first << "   " << (*itr).second <<" \n " ;
        
    }
    
    cout<<"The size of the map is : " << marksMap.size()<<endl;


    



    return 0;
}