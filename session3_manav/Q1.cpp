#include <iostream>
#include <string>
using namespace std;

class Playlist {
public:
    string playlistName;

    // Default constructor
    Playlist() {
        playlistName = "My Favourites";
        cout << "Welcome to your playlist!" << endl;
    }
};

int main() {
    Playlist p1;

    cout << "Playlist Name: " << p1.playlistName << endl;

    return 0;
}
