#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 100000000;
        this->balance = 0;
        cout << "Your account no is " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return 0;
        }
    }
    void add_money(string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid amount " << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance += amount;
            cout << "Add money successful" << endl;
        }
        else
        {
            cout << "Your password is wrong" << endl;
        }
    }
    void deposit_money(string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid amount " << endl;
            return;
        }
        if (this->balance < amount)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        if (this->password == password)
        {
            this->balance -= amount;
            cout << "Deposit money successful" << endl;
        }
        else
        {
            cout << "Your password is wrong" << endl;
        }
    }
    friend class MyCash;
};

class MyCash
{
    protected:
        int balance;
    public:
        MyCash()
        {
            this->balance = 0;
        }
        void add_money_from_bank(BankAccount *myAccount, string password, int amount)
        {
            if (amount < 0)
            {
                cout << "Invalid amount " << endl;
                return;
            }
            if (myAccount -> balance < amount)
            {
                cout << "Insufficient balance" << endl;
                return;
            }
            if (myAccount -> password == password)
            {
                this -> balance += amount;
                myAccount -> balance -= amount;
                cout << "Add money from bank successful" << endl;
            }
            else
            {
                cout << "Your password is wrong" << endl;
            }
        }
        int show_balance()
        {
            return this -> balance;
        }
};

BankAccount *create_account()
{
    string account_holder, password, address;
    int age;
    cout << "Creating Account" << endl;
    cin >> account_holder >> address >> age >> password;
    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
    return myAccount;
}

void add_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Add money to account" << endl;
    cin >> password >> amount;
    myAccount->add_money(password, amount);
    cout << "your bank balance is " << myAccount->show_balance("abc") << endl;
}

void diposit_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Diposit money to account" << endl;
    cin >> password >> amount;
    myAccount->deposit_money(password, amount);
    cout << "your bank balance is " << myAccount->show_balance("abc") << endl;
}

void add_money_from_bank(MyCash *myCash, BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "add money from bank" << endl;
    cin >> password >> amount;
    myCash -> add_money_from_bank(myAccount, password, amount);
    cout << "your bank balance is " << myAccount->show_balance("abc") << endl;
    cout << "MyCash balance is " << myCash->show_balance() << endl;
}

int main()
{
    BankAccount *myAccount = create_account();
    add_money(myAccount);
    diposit_money(myAccount);
    MyCash *myCash = new MyCash();
    add_money_from_bank(myCash, myAccount);
    return 0;
}