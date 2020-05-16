#ifndef GROUP_HPP
#define GROUP_HPP
#include <vector>
#include "song.hpp"

class Group
{
public:
    Group();
    std::vector<Song> getSongs();
    std::string name;
    std::vector<Song> songs;
    std::string genre;
    void loadSongs(std::vector<Song> songs);
    Song processSong(Song song);
};

#endif // GROUP_HPP
