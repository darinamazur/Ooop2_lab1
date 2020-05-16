#ifndef SONG_HPP
#define SONG_HPP
#include <iostream>
#include <string>

class song
{
public:
    unsigned id;            //id to interact with database
    float stars;            //something like rating
    std::string songName;
    std::string releaseDate;
    std::string artistName;
    std::string album;

    song() {                //just for safety & database
        id = 0;
        stars = 0;
    }

    inline void getInfo()          //console output for best debugging
    {
        std::cerr << "  Song info:" << std::endl;
        std::cerr << id << std::endl;
        std::cerr << stars << std::endl;
        std::cerr << songName << std::endl;
        std::cerr << album << std::endl;
        std::cerr << releaseDate << std::endl;
        std::cerr << artistName << std::endl;
    }
};
typedef  song Song;

#endif // SONG_HPP
