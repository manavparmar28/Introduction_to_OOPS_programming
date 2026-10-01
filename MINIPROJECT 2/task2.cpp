#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void addContent() {
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter platform: ";
        getline(cin, platform);

        cout << "Enter views: ";
        cin >> views;
        cin.ignore();

        cout << "Enter status: ";
        getline(cin, status);
    }

    void saveToFile() {
        ofstream file("content_list.txt", ios::app);

        file << "Title: " << title << endl;
        file << "Platform: " << platform << endl;
        file << "Views: " << views << endl;
        file << "Status: " << status << endl;
        file << "------------------------" << endl;

        file.close();

        cout << "Content saved successfully!" << endl;
    }
};

int main() {
    Content c;
    int choice;

    do {
        cout << "\n===== Content Menu =====" << endl;
        cout << "1. Add Content" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            c.addContent();
            c.saveToFile();
        }
        else if (choice == 2) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 2);

    return 0;
}
