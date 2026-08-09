#include <iostream>
using namespace std;

// **************_______________TEMPLATE__________________-********************************

// class Vector {
    
//     public:
    
//     int *arr;
//     int size;

//     Vector(int m) {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(Vector &v) {
//         int d = 0;
//         for(int i = 0; i < size; i++) {
//             d = d + this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// **********************WE BASICALLY USE THIS WAY BUT HERE WE CAN T INSTEAD OF int , AFTER WE 
//                       CAN USE FOR OTHER DATA TYPES LIKE float , double , char , string ETC. SO WE USE TEMPLATE CLAS
//   **********************************************************************************************************
//                       *
//                       * 


template <class T>
class Vector {
    
    public:
    
    T *arr;
    int size;

    Vector(int m) {
        size = m;
        arr = new T[size];
    }
        T dotProduct(Vector &v) {
        T d = 0;
        for(int i = 0; i < size; i++) {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
        }
    };
        /*
        public:
        int size ; 
        int *arr ;

        Vector(int m ){
           size = m ; 
           arr = new int [size ]; 
           }

           Vector dotproduct(Vector &v){

           int d = 0 ; 
           for (int i = 0 ; i < size ; i++)
           d += this->arr[i] * v.arr[i] ; 
           }
           return d;
        
        };
        */
int main()
{
/*
    Vector v1(3 ) ; 
    Vector v2(3 ) ;

    v1.arr[0] = 42 ;
    v1.arr[1] = 2 ; 
    v1.arr[2] = 0 ; 

    v2.arr[0] = 1 ;
    v2.arr[1] = 0 ; 
    v2.arr[2] = 3 ; 

    int a =  v1.dotProduct(v2) ;
    cout<<a<<endl ;

    *************THIS WORKS FOR INT FOR FLOAT WE NEED MAKE NEW CLASS INHERITANCE OF THIS INT 
    BUT FOR THE FLOAT , BUT USING TEMPLATE CLASS WE CAN USE FOR 
    ALL DATA TYPES LIKE INT , FLOAT , DOUBLE , CHAR , STRING ETC. SO WE USE TEMPLATE CLASS
*/
Vector <float> v1(3 ) ;
//   #  ^  THIS IS HOW WE USE TEMPLATE CLASS FOR ALL DATA TYPES LIKE INT , FLOAT , DOUBLE , CHAR , STRING ETC. SO WE USE TEMPLATE CLASS
        Vector <float> v2(3 ) ;

        v1.arr[0] = 42.5 ;
        v1.arr[1] = 2.5 ;           
        v1.arr[2] = 0.5 ;

        v2.arr[0] = 1.5 ;
        v2.arr[1] = 0.5 ;
        v2.arr[2] = 3.5 ;
        
        float result = v1.dotProduct(v2) ;
        cout << result << endl ;    

    return 0;
}