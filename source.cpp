#include <iostream>
using namespace std;
class bankAccount {
    string name;  
    int balance;    
public:
    // Constructor for account
    bankAccount(string n, int b) {
        cout << "Constructor called for " << n << endl;
        // Checking if balance is negative
        if (b < 0) {
            throw "Invalid Account as it is Negative balance";
        }
        name = n;
        balance = b;
    }
    // Function for withdrawl of  money
    void withdraw(int amount) {
        // Checking if balance is sufficient
        if (amount > balance) {
            throw "Withdrawal Failed Balance is Insufficient";
        }
        balance -= amount;
        cout << "Withdrawal successful. Your Remaining Balance is : "
            << balance << endl;
    }
    // Destructor 
    ~bankAccount() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    // Creating pointers for accounts
    bankAccount* acc1 = nullptr;
    bankAccount* acc2 = nullptr;
    bankAccount* acc3 = nullptr;

    //  Case 1: for negative balance
    try {
        acc1 = new bankAccount("Ali", -500);  
    }
    catch (const char* msg) {
        cout << "Case 1 Of Exception: " << msg << endl;
    }
    delete acc1;  // safe delete
    cout << endl;
    //  Case 2:  for Insufficient balance withdrawal 
    try {
        acc2 = new bankAccount("Sara", 1000); 
        acc2->withdraw(2000);                 
    }
    catch (const char* msg) {
        cout << "Case 2 Of Exception: " << msg << endl;
    }
    delete acc2;  
    cout << endl;

    //  Case 3:  for Successful withdrawal
    try {
        acc3 = new bankAccount("Ahmed", 2000); 
        acc3->withdraw(500);                   
    }
    catch (const char* msg) {
        cout << "Case 3 Of Exception: " << msg << endl;
    }
    delete acc3; 
    return 0;
}
