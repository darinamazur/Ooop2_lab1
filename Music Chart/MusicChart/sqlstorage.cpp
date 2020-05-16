#include "sqlstorage.hpp"

SQLStorage::SQLStorage()
{


    QString path = "C:/Music Chart/Music Chart/Data/data.db";

    if(QSqlDatabase::contains(QSqlDatabase::defaultConnection))
        database = QSqlDatabase::database();
    else
        database = QSqlDatabase::addDatabase("QSQLITE");

    database.setDatabaseName(path);
}

SQLStorage::~SQLStorage()
{

}

bool SQLStorage::open()
{
    database.open();
    return isOpened();
}

bool SQLStorage::close()
{
    this->database.close();
    return this->isOpened();
}

bool SQLStorage::isOpened()
{
    if(this->database.isOpen())
        return true;

    return false;
}

std::vector<Song> SQLStorage::getAllSongs()
{
    std::vector<Song> songs;
    Song song;
    QSqlQuery q;

    q.prepare("SELECT * FROM songs");

    if(q.exec())
        while(q.next())
        {
            song.id = q.value("id").toUInt();
            song.stars = q.value("stars").toFloat();
            song.album = q.value("album").toString().toStdString();
            song.artistName = q.value("artistName").toString().toStdString();
            song.releaseDate = q.value("releaseDate").toString().toStdString();
            song.songName = q.value("songName").toString().toStdString();
            songs.push_back(song);
        }

    return songs;
}

Song SQLStorage::getSongById(unsigned id)
{
    std::vector<Song> songs;
    Song alert;
    alert.id = 0;

    for(size_t i = 0; i < songs.size(); i++)
        if(songs[i].id == id)
            return songs[i];

    return alert;
}

bool SQLStorage::deleteSong(unsigned id)
{
    QSqlQuery q;
    q.prepare("DELETE FROM songs WHERE id = :id");
    q.bindValue(":id", id);

    if(q.exec())
        return true;

    return false;
}

bool SQLStorage::addNewSong(Song song)
{
    QSqlQuery q;
    q.prepare("INSERT INTO songs(id, stars, songName, releaseDate, artistName, album) VALUES (:id, :stars, :songName, :releaseDate, :artistName, :album)");
    q.bindValue(":stars", song.stars);
    q.bindValue(":songName", QString::fromStdString(song.songName));
    q.bindValue(":releaseDate", QString::fromStdString(song.releaseDate));
    q.bindValue(":artistName", QString::fromStdString(song.artistName));
    q.bindValue(":album", QString::fromStdString(song.album));

    if(q.exec())
        return true;
    else
        std::cerr << q.lastError().text().toStdString();

    return false;
}
