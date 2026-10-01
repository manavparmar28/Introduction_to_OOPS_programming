#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    // Setter methods
    void setTitle(string t) {
        title = t;
    }

    void setArtist(string a) {
        artist = a;
    }

    // Getter methods
    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    Song song;

    song.setTitle("Shape of You");
    song.setArtist("Ed Sheeran");

    cout << "Original Title: " << song.getTitle() << endl;

    // Update title
    song.setTitle("Perfect");

    cout << "Updated Title: " << song.getTitle() << endl;

    return 0;
}
