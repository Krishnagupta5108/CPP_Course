#include <iostream>
using namespace std;

void average(int arr[], int n)

{ 

    cout<<" ";
}

int main()
{
    int n;
    cout << "Enter size of array";
    cin >> n;

    int arr[n];
    cout << "Enter";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t\t";
    }

    // average(arr, n);

    return 0;
}
