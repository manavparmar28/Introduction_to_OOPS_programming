#include<iostream>
#include<string.h>
using namespace std;

class Playlist{
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main(){
    Playlist p;

    p.name="My Favorite Song";
    p.createdOn="21-09-2026";
    p.isPublic=true;

    cout<<"Playlist name: "<<p.name<<endl;
    cout<<"Date: "<<p.createdOn<<endl;
    cout<<"Is Public: "<<(p.isPublic ? "Yes" : "No");

    return 0;
}
