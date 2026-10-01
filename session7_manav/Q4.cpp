#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string product;
    float price;

    // Write products to file
    ofstream outFile("wishlist.txt");

    for (int i = 1; i <= 3; i++) {
        cout << "Enter product " << i << " name: ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore();

        outFile << product << " - Rs." << price << endl;
    }

    outFile.close();

    // Read products from file
    ifstream inFile("wishlist.txt");

    cout << "\n--- Wishlist ---" << endl;

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
