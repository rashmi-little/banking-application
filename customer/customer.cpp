#include "customer.h"

customer::customer() {}

customer::customer(string name, string password, string mail, string accountNumber, double currentBalance, string phoneNumber)
{
    this->name = name;
    this->password = password;
    this->mail = mail;
    this->accountNumber = accountNumber;
    this->currentBalance = currentBalance;
    this->phoneNumber = phoneNumber;
}

void customer::setName(string name)
{
    this->name = name;
}

string customer::getName()
{
    return name;
}

void customer::setPassword(string password)
{
    this->password = password;
}

string customer::getPassword()
{
    return password;
}

void customer::setMail(string mail)
{
    this->mail = mail;
}

string customer::getMail()
{
    return mail;
}

void customer::setAccountNumber(string accountNumber)
{
    this->accountNumber = accountNumber;
}

string customer::getAccountNumber()
{
    return accountNumber;
}

void customer::setCurrentBalance(double currentBalance)
{
    this->currentBalance = currentBalance;
}

double customer::getCurrentBalance()
{
    return currentBalance;
}

void customer::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

string customer::getPhoneNumber()
{
    return phoneNumber;
}