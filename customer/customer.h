#include <string>
using namespace std;

/**
 * @brief This is a customer entity class which is use to store the customer info like name,password, mail, accountnumber, currentbalance, phonenumber.
 * @author Mr. Rashmi Ranjan Nayak
 */
class customer
{
    string name;
    string password;
    string mail;
    string accountNumber;
    double currentBalance;
    string phoneNumber;

public:
    /**
     * @brief Construct in default mode of customer class
     *
     */
    customer();

    /**
     * @brief This is a parameterized constructer for customer class
     * @param string->name
     * @param string->password
     * @param string->mail
     * @param string->accountnumber
     * @param double->current balance
     * @param string->phonenumber
     *
     */
    customer(string, string, string, string, double, string);

    /**
     * @brief Set the Name object
     * @param string->name
     */
    void setName(string);

    /**
     * @brief Get the Name object
     *
     * @return string->name
     */
    string getName();

    /**
     * @brief Set the Password object
     * @param string->password
     */
    void setPassword(string);

    /**
     * @brief Get the Password object
     *
     * @return string->password
     */
    string getPassword();

    /**
     * @brief Set the Mail object
     * @param string->mail
     */
    void setMail(string);

    /**
     * @brief Get the Mail object
     *
     * @return string->mail
     */
    string getMail();

    /**
     * @brief Set the Account Number object
     * @param string->accountnumber
     */
    void setAccountNumber(string);

    /**
     * @brief Get the Account Number object
     *
     * @return string->accountNumber
     */
    string getAccountNumber();

    /**
     * @brief Set the Current Balance object
     * @param double->current balance
     */
    void setCurrentBalance(double);

    /**
     * @brief Get the Current Balance object
     *
     * @return double->current balance
     */
    double getCurrentBalance();

    /**
     * @brief Set the Phone Number object
     * @param string->phonenumber
     */
    void setPhoneNumber(string);

    /**
     * @brief Get the Phone Number object
     *
     * @return string->phonenumber
     */
    string getPhoneNumber();
};