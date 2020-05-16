#include "group.hpp"
#include <iostream>
#include <random>
#include <ctime>

float random_float(float min, float max)
{
    return ((float)rand() / RAND_MAX) * (max - min) + min;
}

Group::Group()
{

}

Song Group::processSong(Song song)
{
    song.stars = random_float(2, 5);
    return song;
}
