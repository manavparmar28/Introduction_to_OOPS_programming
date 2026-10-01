#include <iostream>
#include <string>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    // Member function to toggle public status
    void togglePublic() {
        isPublic = !isPublic;
    }
};

int main() {
    Playlist p;

    p.name = "My Favorite Songs";
    p.createdOn = "27-09-2026";
    p.isPublic = true;

    cout << "Initial Public Status: "
         << (p.isPublic ? "Yes" : "No") << endl;

    // First toggle
    p.togglePublic();
    cout << "After First Toggle: "
         << (p.isPublic ? "Yes" : "No") << endl;

    // Second toggle
    p.togglePublic();
    cout << "After Second Toggle: "
         << (p.isPublic ? "Yes" : "No") << endl;

    return 0;
}
