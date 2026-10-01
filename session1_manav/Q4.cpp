#include <iostream>
#include <string>
using namespace std;

class Task {
public:
    string title;
    bool isDone = false;

    Task(){
        title="";
    }

    Task(string t) {
        title = t;
    }

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title << " - "
             << (isDone ? "Done" : "Not Done") << endl;
    }
};

class TaskList {
public:
    Task tasks[10];
    int count = 0;

    void addTask(string title) {
        tasks[count] = Task(title);
        count++;
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < count) {
            tasks[index].markDone();
        }
    }

    void showTasks() {
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList l;

    l.addTask("Finish homework");
    l.addTask("Study C++");
    l.addTask("Go to gym");

    l.markTaskDone(1);

    l.showTasks();

    return 0;
}
