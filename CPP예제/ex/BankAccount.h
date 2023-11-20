#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
private:
    char* name;
    int account_num;
    int deposit;
    int credit_rating;
    int gender;
    char* phone_num;
    char* address;

public:
    BankAccount();
    ~BankAccount();

    void SetName(const char* newName);
    void SetAccountNumber(int newAccountNum);
    void SetPIN(int newPIN);
    void SetDeposit(int newDeposit);
    void SetCreditRating(int newCreditRating);
    void SetGender(int newGender);
    void SetPhoneNumber(const char* newPhoneNum);
    void SetAddress(const char* newAddress);

    const char* GetName() const;
    int GetAccountNumber() const;
    int GetDeposit() const;
    int GetCreditRating() const;
    int GetGender() const;
    const char* GetPhoneNumber() const;
    const char* GetAddress() const;

    void Deposit(int amount);
    bool Withdraw(int amount, int PIN);
};

#endif // BANKACCOUNT_H
