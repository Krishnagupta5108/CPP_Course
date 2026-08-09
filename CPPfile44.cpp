#include <iostream>
using namespace std;

class ShopItem
{

    int Id;
    float Price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        Price = b;
    }

    void getdata(void)
    {
        cout << "The code of the Item is " << Id << endl;
        cout << "The Price of the Item is " << Price << endl;
    }
};

int main()
{

    int size = 3;

    ShopItem *ptr = new ShopItem[size];

    ShopItem *ptrTemp = ptr;

    int a, i;
    float b;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of Item" << i + 1 << endl;
        cin >> a >> b;

        ptr->setdata(a, b);
        *ptr++;
    }
    cout << "\n"
         << endl;
    for (i = 0; i < size; i++)
    {
        ptrTemp->getdata();
        cout << endl;

        ptrTemp++;
    }

    return 0;
}