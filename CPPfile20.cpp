#include <iostream>
using namespace std;
 // for class the memory allocation allocate after it called by oject in main  

 class shop {
    int itemId[100] ; 
    int itemPrice[100] ; 
    int counter ;      
     
    public : 
    void initcounter(void  ){
        counter = 0 ;  
         
            
    }
    void setPrice(void);
    void display();

};

void  shop :: setPrice (){

    cout << "\nEnter Id of your item " << (counter + 1) << endl;
    cin >> itemId[counter];
    cout << "Enter Id of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::display()
{
for (int i = 0; i < counter; i++)
{
    cout<<"\nThe Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;

}


}
int main (){
    
shop dukan ;
dukan.initcounter() ; 
dukan.setPrice() ;  
dukan.setPrice() ;  
dukan.setPrice() ;  
dukan.setPrice() ;  
dukan.display() ; 

    
 
    return 0;
}