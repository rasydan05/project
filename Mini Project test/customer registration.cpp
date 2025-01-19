#include "customer registration.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to hold customer details
struct Customer {
    string name;
    string email;
    string phone;
    string address;
};
// Function to register a new customer
void registerCustomer() {
    Customer customer;
    cin.ignore();
    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer email: ";
    getline(cin, customer.email);

    cout << "Enter customer phone: ";
    getline(cin, customer.phone);

    cout << "Enter customer address: ";
    getline(cin, customer.address);

    // Save customer data to a file
    ofstream file("customers.txt", ios::app);
    if (file.is_open()) {
        file << "Name: " << customer.name << endl;
        file << "Email: " << customer.email << endl;
        file << "Phone: " << customer.phone << endl;
        file << "Address: " << customer.address << endl;
        file << "------------------------" << endl;
        file.close();

        cout << "Customer registered successfully!\n";
    } else {
        cerr << "Error: Unable to open file!\n";
    }
}


