#include <iostream>
#include <windows.h>
#include <ctime>
#include "customers.h"
using namespace std;

void customers::signup()
{
    customer temp = this->signupHelper();
    system("cls");
    getAllCustomer().push_back(temp);
}

vector<customer> customers::getAllCustomer()
{
    return allCustomers;
}

customer customers::signupHelper()
{
    string name, password, mail, accountNumber, phoneNumber;
    double currentBalance;
    cout << "Enter your name" << endl;
    cin >> ws;
    getline(cin, name);
    cout << "Enter your password " << endl;
    cin >> password;
    cout << "Enter your mail" << endl;
    cin >> mail;
    cout << "Enter your phonenumber" << endl;
    cin >> phoneNumber;
    currentBalance = 0.0;
    srand(time(0));
    accountNumber = to_string(rand());
    customer user(name, password, mail, accountNumber, currentBalance, phoneNumber);
    return user;
}