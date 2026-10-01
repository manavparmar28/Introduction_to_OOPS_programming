#include <iostream>
#include <string>
using namespace std;

class Task {
public:
    string title;
    bool isDone = false;

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title << ": " << (isDone ? "Done" : "Not done") << endl;
    }
};

int main() {
    Task task;
    task.title = "Finish homework";

    task.display();
    task.markDone();
    task.display();
}
