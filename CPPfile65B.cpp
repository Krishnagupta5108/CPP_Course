    #include <iostream>
    #include <map>
    #include <string>
    using namespace std;

    /*   IMPORTANT POINTS OF THE MAP

            key        value
            ↓          ↓
        "Krishna"      99
        "Average"      70
        "Backbencher"  40


    WE  have a map like this

         ___________________________
        |   Name        |    Marks  |
        | Krishna       |     99    |
        | Average       |     70    |
        | Backbencher   |     40    |
        |_______________|___________|


        SO  to add the third row for the Grade we can do that like this

         ___________________________________
        |    Name        |  Marks  |  Grade |
        |  Krishna       |   99    |   A    |
        |  Average       |   70    |   B    |
        |  Backbencher   |   40    |   C    |
        |________________|_________|________|

        the syntax for that is

        map<string, pair<int, char>> marksMap;

        marksMap["Krishna"] = {99, 'A'};
        marksMap["Average"] = {70, 'B'};
        marksMap["Backbencher"] = {40, 'C'};


*/

    int main (){

    map<string, pair< int, char >> marksMap;

    marksMap["Krishna"] = {99, 'A'};
    marksMap["Average"] = {70, 'B'};
    marksMap["Backbencher"] = {40, 'C'};

    // #############
    auto itr = marksMap.begin();
    
    cout << itr->first << "  "  << itr->second.first << " "<< itr->second.second << endl;  
    

    // TO PRINT THE ALL THE COLUMNS WE USE FOR LOOP 
    auto itr = marksMap.begin();    
    for ( int i = 0 ; i <=marksMap.size() ;   i++)
    {

        cout << itr->first << "  "  << itr->second.first << " "<< itr->second.second << endl;  
        itr++ ; 
        
    }
    
    
    // ############
    
    map<string, pair<int , char > > :: iterator itr;
    for (itr = (marksMap.begin()); itr != (marksMap.end()); itr++)
    {
        
        cout << itr->first << "  "  << itr->second.first << " "<< itr->second.second << endl;  
    
    }
    return 0;
    }

