    #include <iostream>
    #include <functional>
    #include <algorithm>
    using namespace std;
    
    int main (){

        // Function Object( Functor ) : Function wrapped in a class so that it aviable like an object  
        
        int arr[ ]  = { 1 , 23 , 4 , 11 , 33 , 46 , 54 , 34 , 36   }; 
   //      index no =   0 , 1  , 2 , 3  , 4  , 5  , 6  , 7  , 8


     // ## Sorting the array ---------------------------------

    sort(arr , arr+5) ;  // this will sort the elments of array from index 0 to 8 only rest will be unsorted
    sort(arr , arr+5 , greater<int>()) ;  // this will desending order sort the elments of array from index 0 to 8 only  rest will be unsorted

        for (int  i = 0; i < 10; i++)
        {
            cout<<arr[i]<<" \t";
        }

        system("pause");
        // return 0;
    }