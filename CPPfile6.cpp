#include<iostream>
using namespace std;

int main (){


    int age ;
    cout<<"Tell me your name"<<endl;
    cin>>age;
// *******************Selection structure : if-else ******************** 

if( (age>15) && (age<18) ){

cout<<"You are able to apply for Driving  license for the motorbike less then 60c"<<endl;

}
else if(age>=18){

    cout << "You are able to apply for Driving  license for all type of Vehicles" << endl;
}
else {
cout<<"You are not able to apply for the Drving license"<<endl;
}

    // *******************Selection structure : Switch statment ********************

    switch (age)
    {
    case 16:
        cout << "You are able to apply for Driving  license for the motorbike less then 60c";
        break;

    case 17:
        cout << "You are able to apply for Driving  license for the motorbike less then 60c";
        break;
//                                    if here break is not used  then the from till last case all the cases will run 
    case 18:
        cout << "You are able to apply for Driving  license.";
        break;

    default:
    cout<<"You are able to apply for the Driving license.";
        break;
    }
    return 0;
}