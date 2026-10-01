#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor {
public:
    // Only amount
    void processPayment(double amount) {
        cout << "Payment without coupon" << endl;
        cout << "Final amount: " << amount << endl;
    }

    // Amount + coupon code
    void processPayment(double amount, string couponCode) {
        cout << "Payment with coupon: " << couponCode << endl;

        double discount = 100;
        double finalAmount = amount - discount;

        cout << "Final amount: " << finalAmount << endl;
    }
};

int main() {
    PaymentProcessor payment;

    payment.processPayment(1000);
    cout << endl;

    payment.processPayment(1000, "SAVE100");

    return 0;
}
