 #include <iostream>
 #include <fstream>
 using namespace std;
  
 int main (){
    
    // connecting to the file using ofstream class
    ofstream kree("sample52cpp.txt") ; 


    // creating a string and filling it with the string entered by the user
    string name ; 
    cout<<"Enter your name : " ;
    cin>>name ;
    
    // writing a  string to the file
    kree<<name + " is my name"; // writing to the file
    kree.close(); // closing the file after writing to it


    // connecting to the file using ifstream class
    ifstream kr("sample52cpp.txt") ;

    
    string content;
    getline(kr, content);
    cout << "Content of the file: " << content << endl;
    kr.close();






















































  
  
  
    return 0;
 }