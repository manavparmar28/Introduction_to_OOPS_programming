#include <iostream>
#include <string>
using namespace std;

class Movie {
public:
    string title;
    float rating;

    // Parameterized constructor
    Movie(string t, float r) {
        title = t;
        rating = r;
    }

    // Copy constructor
    Movie(const Movie &m) {
        title = m.title;
        rating = m.rating;
    }

    void displayInfo() {
        cout << "Movie Title: " << title << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

int main() {
    // Original object
    Movie movie1("Avengers", 4.8);

    // Copy of movie1
    Movie movie2(movie1);

    cout << "Original Movie:" << endl;
    movie1.displayInfo();

    cout << "\nCopied Movie:" << endl;
    movie2.displayInfo();

    return 0;
}
