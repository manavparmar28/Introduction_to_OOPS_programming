#include <iostream>
using namespace std;

class Product {
public:
    virtual void upload() = 0;  // Abstract method
};

class Electronics : public Product {
public:
    void upload() {
        cout << "Uploading Electronics product..." << endl;
    }
};

class Clothing : public Product {
public:
    void upload() {
        cout << "Uploading Clothing product..." << endl;
    }
};

int main() {
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

    return 0;
}
