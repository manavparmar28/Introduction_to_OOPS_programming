#include <iostream>
#include <string>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    string songs[10];
    int songCount;

    // Constructor
    Playlist() {
        songCount = 0;
    }

    // Add a song
    void addSong(string songTitle) {
        if (songCount < 10) {
            songs[songCount] = songTitle;
            songCount++;
        }
    }

    // Display songs
    void displaySongs() {
        cout << "Songs in Playlist:" << endl;

        for (int i = 0; i < songCount; i++) {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;

    p.name = "My Favorite Songs";
    p.createdOn = "27-09-2026";
    p.isPublic = true;

    // Add three songs
    p.addSong("Perfect");
    p.addSong("Believer");
    p.addSong("Shape of You");

    // Display updated list
    p.displaySongs();

    return 0;
}
