#include <vector>
#include "../customer/customer.h"
using namespace std;
/**
 * @brief This is a customers class which is use to manage customers information.
 * 
 */
class customers{
    vector<customer> allCustomers;
    customer signupHelper();
    void loginHelper();
public:
    void signup();
    void login();
    vector<customer> getAllCustomer();
};