#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt", ios::app);

    string song;

    cout << "Enter a new song name: ";//52 Bars - Karan Aujla
    getline(cin, song);

    file << song << endl;

    file.close();

    cout << "Song added successfully!" << endl;

    return 0;
}
