#include "BankAccount.h"

#include <cstring>
#include <iostream>

BankAccount::BankAccount() {
    name = nullptr;
    account_num = 0;
    deposit = 0;
    credit_rating = 0;
    gender = 0;
    phone_num = nullptr;
    address = nullptr;
}

BankAccount::~BankAccount() {
    delete[] name;
    delete[] phone_num;
    delete[] address;
}

void BankAccount::SetName(const char* newName) {
    delete[] name;
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}

void BankAccount::SetAccountNumber(int newAccountNum) {
    account_num = newAccountNum;
}

void BankAccount::SetPIN(int newPIN) {
    // Set PIN logic here
}

void BankAccount::SetDeposit(int newDeposit) {
    deposit = newDeposit;
}

void BankAccount::SetCreditRating(int newCreditRating) {
    credit_rating = newCreditRating;
}

void BankAccount::SetGender(int newGender) {
    gender = newGender;
}

void BankAccount::SetPhoneNumber(const char* newPhoneNum) {
    delete[] phone_num;
    phone_num = new char[strlen(newPhoneNum) + 1];
    strcpy(phone_num, newPhoneNum);
}

void BankAccount::SetAddress(const char* newAddress) {
    delete[] address;
    address = new char[strlen(newAddress) + 1];
    strcpy(address, newAddress);
}

const char* BankAccount::GetName() const {
    return name;
}

int BankAccount::GetAccountNumber() const {
    return account_num;
}

int BankAccount::GetDeposit() const {
    return deposit;
}

int BankAccount::GetCreditRating() const {
    return credit_rating;
}

int BankAccount::GetGender() const {
    return gender;
}

const char* BankAccount::GetPhoneNumber() const {
    return phone_num;
}

const char* BankAccount::GetAddress() const {
    return address;
}

void BankAccount::Deposit(int amount) {
    deposit += amount;
    // Update credit rating based on deposit amount
    // Implement your logic here
}

bool BankAccount::Withdraw(int amount, int PIN) {
    // Withdraw logic here (including PIN verification)
    // Return true if withdrawal is successful, false otherwise
}
