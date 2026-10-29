#include <iostream>
#include <string>
using namespace std;

class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    SavingAccount(string name, int accNumber, double initialBalance, double rate) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rupees " << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rupees " << amount << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest applied: Rupees " << interest << endl;
    }

    void display() {
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rupees " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rupees " << amount << endl;
        }
    }

    void withdraw(double amount) {
        double total = amount + transactionFee;

        if (total <= balance) {
            balance -= total;

            cout << "Withdrawn: Rupees " << amount
                 << " (Rupees " << transactionFee << " fee applied)"
                 << endl;
        }
        else {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        }
    }

    void display() {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rupees " << balance << endl;
        cout << "Transaction Fee: Rupees " << transactionFee << endl;
    }
};


int main() {

    SavingAccount saving("Alice", 1001, 5000, 3.0);
    CheckingAccount checking("Bob", 1002, 3000, 20.0);

    saving.display();

    saving.deposit(1000);
    saving.withdraw(2000);
    saving.applyInterest();

    saving.display();

    checking.display();

    checking.deposit(1500);
    checking.withdraw(1000);

    checking.display();

    return 0;
}