#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    string title[10];
    string platform[10];
    string views[10];
    string status[10];

    int count = 0;

    void updateStatus() {
        ifstream file("content_list.txt");

        // Read all content
        while (getline(file, title[count])) {
            getline(file, platform[count]);
            getline(file, views[count]);
            getline(file, status[count]);

            string skipLine;
            getline(file, skipLine);

            count++;
        }

        file.close();

        // Display content
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". "
                 << title[i] << " | "
                 << platform[i] << " | "
                 << status[i] << endl;
        }

        // Select content
        int number;
        cout << "\nEnter content number: ";
        cin >> number;

        // Update status
        cout << "Enter new status: ";
        cin >> status[number - 1];

        // Write updated data to file
        ofstream out("content_list.txt");

        for (int i = 0; i < count; i++) {
            out << title[i] << endl;
            out << platform[i] << endl;
            out << views[i] << endl;
            out << status[i] << endl;
            out << "------------------------" << endl;
        }

        out.close();

        cout << "Status updated successfully!" << endl;
    }
};

int main() {
    Content c;

    c.updateStatus();

    return 0;
}
