#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountHolderName;
    string accountNumber;
    double balance;
};

int main() {
    BankAccount userAccount;
    userAccount.accountHolderName = "John Doe";
    userAccount.accountNumber = "123456789";
    userAccount.balance = 1000;

    cout << "Account Holder: " << userAccount.accountHolderName << endl;
    cout << "Account Number: " << userAccount.accountNumber << endl;
    cout << "New Balance: " << userAccount.balance << endl;

    return 0;
}
