#include <iostream>
using namespace std;

class Ticket {
public:
    // Constructor
    Ticket() {
        cout << "Ticket booked successfully!" << endl;
    }

    // Destructor
    ~Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {
    // Create Ticket object
    Ticket t1;

    cout << "Ticket is being used..." << endl;

    // Delete the object
    delete &t1;

    return 0;
}
