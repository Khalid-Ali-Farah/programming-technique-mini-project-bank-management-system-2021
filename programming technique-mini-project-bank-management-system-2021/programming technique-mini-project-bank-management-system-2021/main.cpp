#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

float bankbalance = 0.0;  // default bank balance
char name[50];  // name of user
int accno;  // account number
char type;  // type of account

void create_account();  // to create account
int list();  // list of choices
void deposit();  // deposit
void transfer();  // transferring money
void withdraw();  // withdrawing money
void check();  // checking details about account
void clear_screen();  // clear screen for better UI

int main()
{
    while (1)  // creating infinity loop to repeat the list
    {
        switch (list())  // for calling list and choices
        {
        case 1:
            create_account();
            break;
        case 2:
            deposit();
            break;
        case 3:
            transfer();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            check();
            break;
        case 6:
            return 0;
        default:
            cout << "INVALID CHOICE! Please try again.\n";
        }
    }
}

void create_account()
{
    cout << "\nEnter the Account No.: ";
    cin >> accno;
    cout << "Enter the Name of the Account holder: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Enter Type of the Account (C/S): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter The Initial Amount: ";
    cin >> bankbalance;
    while (bankbalance < 0) {
        cout << "Initial amount cannot be negative. Please enter a valid amount: ";
        cin >> bankbalance;
    }
    cout << "\nAccount Created Successfully!\n";
}

int list()  // list definition
{
    int ch;
    cout << "\n======================\n";
    cout << "BANK MANAGEMENT SYSTEM\n";
    cout << "======================\n";
    cout << "1. NEW ACCOUNT\n";
    cout << "2. DEPOSIT\n";
    cout << "3. TRANSFER\n";
    cout << "4. WITHDRAW\n";
    cout << "5. CHECK DETAILS\n";
    cout << "6. EXIT\n";
    cout << "Enter Your Choice: ";
    cin >> ch;
    clear_screen();
    return ch;
}

void deposit()  // deposit definition
{
    float dep;
    cout << "Enter the Amount You Want To Deposit: ";
    cin >> dep;
    while (dep <= 0) {
        cout << "Deposit amount must be positive. Please enter a valid amount: ";
        cin >> dep;
    }
    bankbalance += dep;
    cout << "You Have Successfully Deposited " << dep << " RM In Your Account.\n";
}

void transfer()  // transfer definition
{
    int tracc;
    float tr;
    cout << "Enter the Account Number You Want To Transfer To: ";
    cin >> tracc;
    cout << "Enter The Amount You Want To Transfer: ";
    cin >> tr;
    if (tr > bankbalance)
    {
        cout << "SORRY! You don't have enough money to transfer.\n";
    }
    else if (tr <= 0) {
        cout << "Transfer amount must be positive.\n";
    }
    else
    {
        bankbalance -= tr;
        cout << tr << " RM has been successfully transferred to Account No: " << tracc << "\n";
    }
}

void withdraw()  // withdraw definition
{
    float with;
    cout << "Enter The Amount You Want To Withdraw: ";
    cin >> with;
    if (with > bankbalance)
    {
        cout << "SORRY! You don't have enough money to withdraw.\n";
    }
    else if (with <= 0) {
        cout << "Withdrawal amount must be positive.\n";
    }
    else
    {
        bankbalance -= with;
        cout << with << " RM has been successfully withdrawn from your account.\n";
    }
}

void check()  // check details definition & save
{
    ofstream outFile;
    outFile.open("account.txt", ios::out | ios::app);

    cout << "````CHECK DETAILS``````\n";
    cout << "| NAME:        | " << name << " |\n";
    cout << "| ACC.NO:      | " << accno << " |\n";
    cout << "| TYPE.ACC.:   | " << type << " |\n";
    cout << "| BANKBALANCE: | " << bankbalance << " RM |\n";

    outFile << "````CHECK DETAILS``````\n";
    outFile << "| NAME:        | " << name << " |\n";
    outFile << "| ACC.NO:      | " << accno << " |\n";
    outFile << "| TYPE.ACC.:   | " << type << " |\n";
    outFile << "| BANKBALANCE: | " << bankbalance << " RM |\n";
    outFile.close();
}

void clear_screen() {
    cout << string(100, '\n');
}
