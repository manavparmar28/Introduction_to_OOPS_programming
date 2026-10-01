#include <iostream>
#include <string>
using namespace std;

class FlipkartSearch {
public:

    // Search by product name
    void searchProduct(string productName) {
        cout << "Searching for product: " << productName << endl;
    }

    // Search by product name and category
    void searchProduct(string productName, string category) {
        cout << "Searching for product: " << productName
             << " in category: " << category << endl;
    }
};

int main() {
    FlipkartSearch search;

    // Search using only product name
    search.searchProduct("Laptop");

    // Search using product name and category
    search.searchProduct("Laptop", "Electronics");

    return 0;
}
