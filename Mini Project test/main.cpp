#include <iostream>
#include "travelpackage.hpp"
#include "booking.hpp"
#include "customer registration.hpp"
#include "paymentcalc.hpp"


using namespace std ;
int main()
{
        int choice , choose , Customer_Num ;
        cout << "\n------ Travel Agency Booking System ------\n";
        cout << "1. Register \n";
        cout << "2. Admin Menu\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerCustomer();
                break;
            case 2:
                registerCustomer();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    BookingDetail() ;
    displayTravelPackages();

    cout << "Enter the number of people: ";
    cin >> Customer_Num;
    cout << "Choose a travel package (1 - 4): ";
    cin >> choose;
    int answer = calculatePayment(Customer_Num, choose); 
    cout << "Total payment: RM" << answer << endl;
    return 0;
    }
    
