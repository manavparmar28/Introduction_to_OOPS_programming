#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content to social media..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Instagram: Uploading a photo or reel..." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "YouTube: Uploading a video..." << endl;
    }
};

int main() {
    InstagramUploader instagram;
    YouTubeUploader youtube;

    instagram.uploadContent();
    youtube.uploadContent();

    return 0;
}
