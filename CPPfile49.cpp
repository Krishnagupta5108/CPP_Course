#include <iostream>
#include <string>
using namespace std;

class CWK{  // code with krishna              
     
    protected: 
     string  title ;
     float rating ; 

     public: 

     CWK(string s, float r){
         title = s;
         rating = r;
     }
     void display ( ){}

};

class CWKVideo : public CWK{
    float videoLength ; 
    public: 
    CWKVideo(string s, float r, float vl):CWK(s,r){
        videoLength = vl;
    }
    void display(){
        cout << "Video title is : " << title << endl;
        cout << "Video rating is : " << rating << endl;
        cout << "Video length is : " << videoLength << endl;
    }
};



class CWKText : public CWK{
    int words  ; 
    public: 
    CWKText(string s, float r, int ws):CWK(s,r){
        words = ws;
    }
    void display(){
        cout << "Text title is : " << title << endl;
        cout << "Text rating is : " << rating << endl;
        cout << "Text words is : " << words << endl;
    }
};






 
int main (){
    string title; 
    float rating  , vlen ;
    int words ; 


    title = "C++ tutorial"; 
    rating = 4.5;
    vlen = 15.30;

    CWKVideo CPPvideo(title, rating, vlen);
    CPPvideo.display();




    cout << endl;
    title = "C++ tutorial text";
    rating = 4.5;   
    words = 500;    

    CWKText CPPtext(title , rating, words);
    CPPtext.display();

    CWK *ptr[2];

    ptr[0] = &CPPvideo;    
    ptr[1] = &CPPtext;   
    
    ptr[0]->display();  cout << endl;
    ptr[1]->display();  


 
 
 
    return 0;
}


/*
1. They cannot be static, i.e., they cannot have the static keyword in their declaration.
2. They are accessed using an object of the class or a pointer to the object of the class.
3. they can be declared in the public, protected or private section of a class.
4. They can be a friend of another class.
5. They can be declared as virtual or pure virtual.
6. A virtual function in base class might not be use . 
7. Virtual functions is defined in the base class  , there is no neccisity of redefining it in the derived class but if we want to redefine it in the derived class then we can do that.  






























































































*/