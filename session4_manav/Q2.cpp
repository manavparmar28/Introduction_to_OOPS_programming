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
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

int main() {
    YouTuber user;

    user.username = "Manav";
    user.followers = 5000;
    user.channelName = "Manav Vlogs";

    user.displayProfile();
    user.uploadVideo("My First Vlog");

    return 0;
}
