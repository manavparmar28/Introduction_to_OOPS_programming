#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    // Member function
    void markDelivered() {
        isDelivered = true;
        cout << "Order " << orderId << " has been delivered!" << endl;
    }
};

int main() {
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Domino's";
    order.isDelivered = false;

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant: " << order.restaurantName << endl;
    cout << "Delivered: " << (order.isDelivered ? "Yes" : "No") << endl;

    // Mark the order as delivered
    order.markDelivered();

    cout << "Delivered: " << (order.isDelivered ? "Yes" : "No") << endl;

    return 0;
}
