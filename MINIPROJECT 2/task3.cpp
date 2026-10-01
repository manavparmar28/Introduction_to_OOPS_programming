#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    void readFile() {
        ifstream file("content_list.txt");

        string title, platform, views, status;
        int number = 1;

        while (getline(file, title)) {
            getline(file, platform);
            getline(file, views);
            getline(file, status);

            // Skip the separator line
            string separator;
            getline(file, separator);

            cout << number << ". "
                 << title << " | "
                 << platform << endl;

            number++;
        }

        file.close();
    }
};

int main() {
    Content c;

    cout << "===== Content List =====" << endl;

    c.readFile();

    return 0;
}
