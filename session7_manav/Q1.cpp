#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Perfect - Ed Sheeran" << endl;
    file << "Believer - Imagine Dragons" << endl;
    file << "Kesariya - Arijit Singh" << endl;
    file << "Shape of You - Ed Sheeran" << endl;
    file << "Apna Bana Le - Arijit Singh" << endl;

    file.close();

    cout << "Songs saved successfully!" << endl;

    return 0;
}
