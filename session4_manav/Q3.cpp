#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class Podcaster : public SocialMediaUser {
public:
    string podcastName;

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster user;

    user.username = "Manav";
    user.followers = 3000;
    user.podcastName = "Tops Tech";

    user.displayProfile();
    user.publishEpisode("Introduction to C++");

    return 0;
}
