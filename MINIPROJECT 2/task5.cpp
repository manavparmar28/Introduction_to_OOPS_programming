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

    void deleteContent() {
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

        // Display list
        cout << "===== Content List =====" << endl;

        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". "
                 << title[i] << " | "
                 << platform[i] << " | "
                 << status[i] << endl;
        }

        // Select item to delete
        int number;

        cout << "\nEnter content number to delete: ";
        cin >> number;

        if (number < 1 || number > count) {
            cout << "Invalid number!" << endl;
            return;
        }

        // Move items one position back
        for (int i = number - 1; i < count - 1; i++) {
            title[i] = title[i + 1];
            platform[i] = platform[i + 1];
            views[i] = views[i + 1];
            status[i] = status[i + 1];
        }

        count--;

        // Save updated list
        ofstream out("content_list.txt");

        for (int i = 0; i < count; i++) {
            out << title[i] << endl;
            out << platform[i] << endl;
            out << views[i] << endl;
            out << status[i] << endl;
            out << "------------------------" << endl;
        }

        out.close();

        cout << "\nContent deleted successfully!" << endl;

        // Display updated list
        cout << "\n===== Updated List =====" << endl;

        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". "
                 << title[i] << " | "
                 << platform[i] << " | "
                 << status[i] << endl;
        }
    }
};

int main() {
    Content c;

    c.deleteContent();

    return 0;
}
