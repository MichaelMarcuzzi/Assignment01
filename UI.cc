// Assignment 1 UI

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "UI.h"
using namespace std;


void UI::UIMenu(int& input)
{
  // string str;

  input = -1;

  std::cout<< "\n\n\n                   INVENTORY MANAGEMENT SYSTEM ADMIN MENU\n\n";
  cout << "          1. Display playlists \n\n";
  cout << "          2. Display songs in a playlist \n\n";
  cout << "          3. Add new song \n\n";
  cout << "          4. Add new recording \n\n";
  cout << "          5. Add new playlist \n\n";
  cout << "          6. Add new user \n\n";
  cout << "          0. Exit\n\n";

  while (input < 0 || input > 6) {
    cout << "Enter your selection:  ";
    input = readInt();
  }
}

void UI::printPlaylists(?????  list) // need argument for location of playlists
{
  stringstream ss;
  input = -1;
  
  cout << endl << "Playlists:" << endl;
  /*
  // output playlists 
  cout << endl << "Playlists: " << endl;
  cout << "----------" << endl;
  
  for(i=0; i<list.getSize(); i++){
    std::string playlist = list.get(i);
    
    ss << i << ": " << playlist << endl;
    cout << ss.str();
  }
  
  while (input < 0 || input > list.getSize();) {
    cout << "Enter your selection:  ";
    input = readInt();
  }
  */
}

void UI::printSongs(????? playlist) // need argument for location of songs
{
  /*
  // output song names in user inputed playlist
  cout << endl << "Songs in " << playlist_in << ": " << endl;
  
  for(i=0; i<playlist.getSize(); i++){
    std::string song = playlist.get(i);
    
    ss << i << ": " << song.getName() << " by " << song.getComp() << " (ID: " << song.getID() << ")" << endl;
    cout << ss.str();
  }
  */
}

void UI::addSong()  // add song
{
  cout << endl << "Song added" << endl;
}

void UI::addRecording() // add recording
{
  cout << endl << "recording added" << endl;
}

void UI::addPlaylist()  // add playlist
{
  cout << endl << "playlist added" << endl;
}

void UI::addUser() // add user
{
  cout << endl << "user added" << endl;
}


void UI::promptForInt(string prompt, int& num) // used from CUShop
{
  cout << prompt << ": ";
  num = readInt();
}

int UI::readInt() // reads int input
{
  string str;
  int    n;

  getline(cin, str);
  stringstream ss(str);
  ss >> n;

  return n;
}

