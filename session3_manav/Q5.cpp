#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Playlist {
public:
    string playlistName;

    // Constructor
    Playlist(string name) {
        playlistName = name;
        cout << "Playlist created: " << playlistName << endl;
    }

    // Destructor
    ~Playlist() {
        ofstream file("autosave.txt");

        file << playlistName;

        file.close();

        cout << "Playlist automatically saved!" << endl;
    }
};

int main() {
    Playlist p1("My Favourites");

    cout << "Playlist is being used..." << endl;

    return 0;
}
