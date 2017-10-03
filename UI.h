#ifndef UI_H
#define UI_H

#include <string>
using namespace std;

class UI
{
  public:
    void UIMenu(int&);
    void printPlaylists(??);
    void printSongs(??);
    void addSong();
    void addRecording();
    void addPlaylist();
    void addUser();
    void promptForInt(string, int&);;

  private:
    int    readInt();
};

#endif
