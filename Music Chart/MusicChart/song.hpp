#ifndef SONG_HPP
#define SONG_HPP
#include <iostream>
#include <string>

struct song
{
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

    void getInfo()          //console output for best debugging
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
typedef struct song Song;

#endif // SONG_HPP
