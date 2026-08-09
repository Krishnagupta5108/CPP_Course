#include <iostream>
using namespace std;

int main()
{
 
 /* ************LOOPS IN C++***************   */
//   1.FOR LOOP__________________________-  
//  Syantax for the For loop
//  for (initialization; condition; updation)
//  {
//         satement code 
//  }
 
//   To print the    to 40  using for loop 
 
    for (int i = 0; i < 30; i++)
    {
        cout<<i<<endl;
    }

/*               Infinte loop using FOR LOOP

for(int f ; 23<= 54 ; f++)
{
cout<<f<<endl;
}

*/
  

    //   2. While LOOP
    //  Syantax for the While loop
    //  while(condition)
    //  {
    //         satement code
    //   Updation
    //  }

    //   To print the    to 40  using for loop
    int x =1 ; 
while ( x < 40)                   // in while loop we cannot initialize  the variable because it for thhe condtion only
{
    cout<<x<<endl;
    x++;
}
/*      Infinite series using While loop 
while(true){
cout<<w<<endl;
w++;
}
*/


//  _______ 3.DO-While LOOP__________________________-
//  Syantax for the DO WHILE loop

// do
// {
//      statement code
// Updation
// } while (condition);

//   To print the    to 40  using for loop
int z ; 
do
{
    cout << z << endl;       
    z++;           // in DO WHILE  whether the conditon is false once the loop will work
}while(z<=40);

/*      Infinte loop in DO WHILE 
do{

cout<<d<endl;
d++;
}while(34<40);
*/
    return 0;
}

       /*         HOMEWORK :- Multiplication table of 6

int dw = 1;
do{
    cout<<dw*6<<endl;
    dw++;
}while(dw<=10);
*/