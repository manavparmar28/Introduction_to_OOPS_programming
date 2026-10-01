#include <iostream>
#include <string>
using namespace std;

struct OrderData {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order " << orderId << " has been delivered!" << endl;
    }
};

int main() {
    OrderData data = {101, "Domino's", false};

    FoodOrder order(data);

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant: " << order.restaurantName << endl;
    cout << "Delivered: " << (order.isDelivered ? "Yes" : "No") << endl;

    order.markDelivered();

    return 0;
}
