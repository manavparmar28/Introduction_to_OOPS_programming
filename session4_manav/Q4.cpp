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

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    void uploadVideo(string title) {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber {
public:
    void streamGame(string gameName) {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber gamer;

    gamer.username = "Manav";
    gamer.followers = 5000;
    gamer.channelName = "Manav Gaming";

    gamer.displayProfile();
    gamer.uploadVideo("GTA V Gameplay");
    gamer.streamGame("Minecraft");

    return 0;
}
