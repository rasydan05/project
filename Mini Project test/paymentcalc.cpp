// Function to display the payment bill
#include <iostream>
#include <iomanip>
#include <fstream>
#include "paymentcalc.hpp"
using namespace std;

// function declaration
//void displayPayment() ;

int calculatePayment(int Customer_Num, int choose) {
    int totalPrice = 0;
    switch (choose) {
        case 1:
            totalPrice = 1200 * Customer_Num;
            break;
        case 2:
            totalPrice = 2500 * Customer_Num;
            break;
        case 3:
            totalPrice = 450 * Customer_Num;
            break;
        case 4:
            totalPrice = 1800 * Customer_Num;
            break;
    }
    return totalPrice;
}
// Function to calculate the total payment for a booking
/*void calculatePayment() 
{
    int total ;
    cout << "How Many Are You : " ;
    cin >> Total
    // Calculate the total price: price per person * number of people
    int totalPrice = booking.package.price * booking.numPeople;
}
*/
/*void displayPayment() {
    // Calculate total payment
    double totalPrice = booking.price * booking.numPeople;

    // Display the payment bill
    cout << "\n--- Payment Bill ---\n";
    cout << "Package: " << booking.package.name << endl;
    cout << "Price per person: RM" << fixed << setprecision(2) << booking.package.price << endl;
    cout << "Number of People: " << booking.numPeople << endl;
    cout << "Total Price: RM" << fixed << setprecision(2) << totalPrice << endl;
}
*/