#include <iostream>
#include <string>
#include <map>
using namespace std;

// 🏦 Bank Account Management System😂😂


    class account
{
public:
    int accountNo;
    string accountName;
    double accountBalance;
};

    class Transaction
    {
    public:
        string type;
        double amount;
    };

    void displayAccounts(map<int, pair<string, double>> AccountMap)
{

    cout << "Account No\tAccount Name\tAccount Balance" << endl;
    cout << "---------------------------------------------" << endl;

    for (auto itr = AccountMap.begin(); itr != AccountMap.end(); ++itr)
    {
        cout << itr->first << "\t\t" << itr->second.first
             << "\t\t" << itr->second.second << endl;
    }
}


int main()
{

    map<int, pair<string, double>> AccountMap;

    for (int i = 0; i < 3; i++)
    {

        account a;
        cout << "Enter the Account No :";
        cin >> a.accountNo;

        cout << "Enter the Account Name :";
        cin >> a.accountName;

        cout << "Enter the Account Balance :";
        cin >> a.accountBalance;

        AccountMap[a.accountNo] = {a.accountName, a.accountBalance};
    }
    cout << endl
         << endl
         << endl
         << endl;

    displayAccounts(AccountMap);

    cout << endl
         << endl
         << endl;

         
    // Transfer money from one account to another
    cout << "Enter the your Account No to transfer money :";
    int transferFromAccNo;
    cin >> transferFromAccNo;
 
    cout << "Enter the Account No to transfer money to :";
    int transferToAccNo;
    cin >> transferToAccNo;

    cout << "Enter the Amount to transfer :";
    int transferAmount;
    cin >> transferAmount;

    AccountMap[transferFromAccNo].second = AccountMap[transferFromAccNo].second -transferAmount; // Deduct the specified amount from the sender's account balance
    AccountMap[transferToAccNo].second = AccountMap[transferToAccNo].second + transferAmount;       // Add the specified amount to the receiver's account balance

    cout << "Account Balance for Account No " << transferFromAccNo << " is: " << AccountMap[transferFromAccNo].second << endl;
    cout << "Account Balance for Account No " << transferToAccNo << " is: " << AccountMap[transferToAccNo].second << endl;

    // return 0;
    system("pause");
}


    // //  Transaction money from an account
    // map<int, Transaction> transactions;

    // cout << "Enter the Account No for transaction :";
    // int accNo_Transaction;
    // cin >> accNo_Transaction;   

/*













*/