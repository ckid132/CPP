#include <iostream>
#include "BankAccount.h"

int main() {
    int numCustomers;
    std::cout << "Enter the number of customers: ";
    std::cin >> numCustomers;

    BankAccount* customers = new BankAccount[numCustomers];

    for (int i = 0; i < numCustomers; ++i) {
        // Input customer information here
        // Use setter methods to set customer data
    }

    // Example usage of getter methods
    for (int i = 0; i < numCustomers; ++i) {
        std::cout << "Customer " << i + 1 << " Name: " << customers[i].GetName() << std::endl;
        std::cout << "Customer " << i + 1 << " Account Number: " << customers[i].GetAccountNumber() << std::endl;
        // Output other customer information
    }

    // Clean up memory
    delete[] customers;

    return 0;
}
