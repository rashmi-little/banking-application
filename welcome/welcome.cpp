#include <iostream>
#include "welcome.h"
using namespace std;

void welcome::print()
{
    cout << "-----------WELCOME TO OUR BANK ---------------" << endl;
    cout << "Click 1 if your account already exist" << endl;
    cout << "Click 2 if you want to create a new account" << endl;
    signupOrsignin();
}

void welcome::signupOrsignin()
{
    int decision;
    cin >> decision;
    if (decision == 1)
    {
        cout<<"You choose for login"<<endl;
    }
    else if (decision == 2)
    {
        cout<<"You choose for sign up"<<endl;
    }
}