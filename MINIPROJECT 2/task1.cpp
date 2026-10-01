#include <iostream>
#include <string>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

int main() {
    Content c;

    c.title = "My First Video";
    c.platform = "YouTube";
    c.views = 5000;
    c.status = "Published";

    c.display();

    return 0;
}
