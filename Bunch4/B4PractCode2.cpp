#include <iostream>
using namespace std;



void add (int arr[]){
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum =  sum + arr[i];
    }
    cout << "\nSum of all elements: " << sum << endl;
}

int main()
{
    int arr[10];
    cout << "Enter";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<"\t\t";
    }

    add(arr);

    return 0;
}