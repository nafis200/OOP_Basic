// 🚩 Question (Final Version):

// 👉 Bank Management System (C++)

// একটা প্রোগ্রাম লিখো যেখানে—

// AbstractAccount নামে একটা abstract class থাকবে → pure virtual function showAccountDetails() থাকবে।

// BankAccount নামে একটা class থাকবে, যেটা AbstractAccount থেকে inherit হবে।

// Variables: name, accountNumber (protected), balance (private)।

// Constructor → অ্যাকাউন্ট initialize করবে।

// Destructor → "Account closed!" মেসেজ দেখাবে।

// Getter/Setter দিয়ে balance access করবে।

// deposit() এবং withdraw() ফাংশনে this->balance ব্যবহার করবে।

// Static variable → totalAccounts রাখবে, যেটা দিয়ে মোট কয়টা account ওপেন হয়েছে সেটা count করবে।

// SavingsAccount এবং CurrentAccount → BankAccount থেকে inherit হবে।

// showAccountDetails() আলাদা করে override করবে।

// Polymorphism:

// Overloading → deposit(int amount) এবং deposit(double amount)।

// Overriding → showAccountDetails()।

// ✅ Expected Test Cases (main function এ):
// int main() {
//     SavingsAccount s1("Nafis", 101, 5000);
//     CurrentAccount c1("Rakesh", 102, 10000);

//     s1.deposit(2000);         // int deposit
//     c1.deposit(1500.75);      // double deposit
//     c1.withdraw(500);

//     cout << "Total Accounts: " << BankAccount::getTotalAccounts() << endl;

//     s1.showAccountDetails();  // SavingsAccount details
//     c1.showAccountDetails();  // CurrentAccount details

//     return 0;
// }

// 🖥️ Sample Output (Test Run):
// Deposited 2000. New Balance: 7000
// Deposited 1500.75. New Balance: 11500.75
// Withdrawn 500. New Balance: 9500.75
// Total Accounts: 2

// [ Savings Account ]
// Name: Nafis
// Account Number: 101
// Balance: 7000

// [ Current Account ]
// Name: Rakesh
// Account Number: 102
// Balance: 9500.75

// Account closed!
// Account closed!

// 🔎 Explanation (Concept Mapping):

// Class & Object → BankAccount, SavingsAccount, CurrentAccount object তৈরি।

// Constructor → account তৈরি করার সময় value initialize।

// Destructor → object scope শেষ হলে "Account closed!"।

// this keyword → this->balance += amount;

// Access Modifiers → balance private, কিন্তু getBalance() & setBalance() দিয়ে access।

// Encapsulation → ডাটা hide করা হয়েছে getter/setter এর মাধ্যমে।

// Abstraction → AbstractAccount pure virtual function দিয়ে তৈরি।

// Inheritance → SavingsAccount এবং CurrentAccount inherit করছে।

// Polymorphism →

// Overloading → deposit(int) & deposit(double)।

// Overriding → আলাদা করে showAccountDetails()।

// Static Keyword → totalAccounts সব object এর মধ্যে shared।
// #include <bits/stdc++.h>
// using namespace std;

// // ================= Abstraction ==================
// class AbstractAccount {
// public:
//     virtual void showAccountDetails() const = 0; // pure virtual function
//     virtual ~AbstractAccount() {}
// };

// // ================= BankAccount Base Class ==================
// class BankAccount : public AbstractAccount {
// protected:
//     string name;
//     int accountNumber;
// private:
//     double balance;
//     static int totalAccounts; // static variable for total accounts

// public:
//     // Constructor
//     BankAccount(string name, int accountNumber, double balance) {
//         this->name = name;
//         this->accountNumber = accountNumber;
//         this->balance = balance;
//         totalAccounts++;
//     }

//     // Destructor
//     virtual ~BankAccount() {
//         cout << "Account closed!" << endl;
//     }

//     // Encapsulation (Getter & Setter)
//     double getBalance() const {
//         return balance;
//     }

//     void setBalance(double amount) {
//         this->balance = amount;
//     }

//     // deposit function (Overloading)
//     void deposit(int amount) {
//         this->balance += amount;
//         cout << "Deposited " << amount << ". New Balance: " << this->balance << endl;
//     }

//     void deposit(double amount) {
//         this->balance += amount;
//         cout << "Deposited " << amount << ". New Balance: " << this->balance << endl;
//     }

//     // withdraw function
//     void withdraw(double amount) {
//         if (this->balance >= amount) {
//             this->balance -= amount;
//             cout << "Withdrawn " << amount << ". New Balance: " << this->balance << endl;
//         } else {
//             cout << "Insufficient balance!" << endl;
//         }
//     }

//     // Static function
//     static int getTotalAccounts() {
//         return totalAccounts;
//     }

//     // Pure virtual override
//     virtual void showAccountDetails() const override = 0;
// };

// // Static variable initialize
// int BankAccount::totalAccounts = 0;

// // ================= SavingsAccount Class ==================
// class SavingsAccount : public BankAccount {
// public:
//     SavingsAccount(string name, int accountNumber, double balance)
//         : BankAccount(name, accountNumber, balance) {}

//     void showAccountDetails() const override {
//         cout << "\n[ Savings Account ]" << endl;
//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << getBalance() << endl;
//     }
// };

// // ================= CurrentAccount Class ==================
// class CurrentAccount : public BankAccount {
// public:
//     CurrentAccount(string name, int accountNumber, double balance)
//         : BankAccount(name, accountNumber, balance) {}

//     void showAccountDetails() const override {
//         cout << "\n[ Current Account ]" << endl;
//         cout << "Name: " << name << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << getBalance() << endl;
//     }
// };

// // ================= Main Function ==================
// int main() {
//     SavingsAccount s1("Nafis", 101, 5000);
//     CurrentAccount c1("Rakesh", 102, 10000);

//     s1.deposit(2000);         // int deposit
//     c1.deposit(1500.75);      // double deposit
//     c1.withdraw(500);

//     cout << "\nTotal Accounts: " << BankAccount::getTotalAccounts() << endl;

//     s1.showAccountDetails();
//     c1.showAccountDetails();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class AbstractAccount
{
public:
    virtual void showAccountDetails() = 0;
    virtual double MoneyShow() = 0;
    virtual void Addmoney(double amount) = 0;
    virtual void deposit(int amount) = 0;
    virtual void withdraw(int amount) = 0;
    virtual ~AbstractAccount() {};
};

class BankAccount : public AbstractAccount
{
protected:
    string name;
    int AccountNumber;
    double balanced;

    static int total_Account;

public:
    BankAccount(string name, int AccountNumber, double balanced)
    {
        this->name = name;
        this->AccountNumber = AccountNumber;
        this->balanced = balanced;
        total_Account++;
    }

    // getter
    double MoneyShow() override
    {
        return balanced;
    }
    //    setter
    void Addmoney(double balanced) override
    {
        this->balanced += balanced;
    }

    virtual void showAccountDetails() = 0;

    void deposit(int amount)
    {
        this->balanced += amount;
    }

    void withdraw(int amount)
    {
        this->balanced -= amount;
    }

    ~BankAccount()
    {
        cout << "Account closed!" << "\n";
    }
};

int BankAccount::total_Account = 0;

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(string name, int AccountNumber, double balanced) : BankAccount(name, AccountNumber, balanced)
    {
    }
    void showAccountDetails() override
    {
        cout << "BankAccount :" << "\n";
        cout << name << " " << AccountNumber << " " << balanced << " " << total_Account << "\n";
    }
};

int main()
{
    SavingsAccount s1("Nafis", 101, 5000);
    s1.deposit(2000);
    s1.showAccountDetails();
}