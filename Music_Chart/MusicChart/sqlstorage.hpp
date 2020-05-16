#ifndef SQLSTORAGE_HPP
#define SQLSTORAGE_HPP
#include <QtSql>
#include <vector>
#include "song.hpp"

class SQLStorage
{
public:
    SQLStorage();
    ~SQLStorage();

    //manage database
    bool open();
    bool close();
    bool isOpened();

    //manage data
    std::vector<Song> getAllSongs();
    Song getSongById(unsigned id);

    //manage songs
    bool addNewSong(Song song);
    bool deleteSong(unsigned id);
private:
    QSqlDatabase database;
};

#endif // SQLSTORAGE_HPP
