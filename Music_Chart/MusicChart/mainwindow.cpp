#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <set>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Storage = new SQLStorage;

    if(!Storage->open())
    {
        QMessageBox::critical(0, "Error", "Couldn't open database (incorrect path)");
        exit(EXIT_FAILURE);
    }

    loadSongList();
    loadGroupList();
    loadGroups();
    clearLabels();
}

MainWindow::~MainWindow()
{
    Storage->close();
    delete Storage;
    delete ui;
}

void MainWindow::loadSongList()
{
    std::vector<Song> songs;
    ui->songsList->clear();

    songs = this->Storage->getAllSongs();

    for(size_t i = 0; i < songs.size(); i++)
        ui->songsList->addItem(QString::fromStdString(songs[i].songName));
}

void MainWindow::fillLabels()
{
    std::string songName = ui->songsList->currentItem()->text().toStdString();
    std::vector<Song> songs = Storage->getAllSongs();
    Song currentSong;

    //searching
    for(size_t i = 0; i < songs.size(); i++)
        if(songName == songs[i].songName)
            currentSong = songs[i];

    //Groups
    Group gr;
    currentSong = gr.processSong(currentSong);
    Storage->deleteSong(currentSong.id);
    Storage->addNewSong(currentSong);

    //labels
    ui->songAlbumName->setText(QString::fromStdString(currentSong.album));
    ui->songArtistName->setText(QString::fromStdString(currentSong.artistName));
    ui->songName->setText(QString::fromStdString(currentSong.songName));
    ui->songReleaseDate->setText(QString::fromStdString(currentSong.releaseDate));
    ui->songStars->setText(QString::number(currentSong.stars));
}

void MainWindow::clearLabels()
{
    ui->songAlbumName->setText("...");
    ui->songArtistName->setText("...");
    ui->songName->setText("Choose song to see more details");
    ui->songReleaseDate->setText("...");
    ui->songStars->setText("...");
}

void MainWindow::on_songsList_itemClicked(QListWidgetItem *item)
{
    fillLabels();
}

void MainWindow::on_AddNewSong_clicked()
{
    AddDialog = new AddNewDialog;
    if(AddDialog->exec())
    {
        this->NewSong = AddDialog->sendSong();
        this->Storage->addNewSong(this->NewSong);
    }
    loadSongList();
    loadGroupList();
}

void MainWindow::on_DeleteSong_clicked()
{
    std::string name;
    Song song;
    std::vector<Song> songs = Storage->getAllSongs();

    name = ui->songsList->currentItem()->text().toStdString();

    for(size_t i = 0; i < songs.size(); i++)
        if(name == songs[i].songName)
        {
            song = songs[i];
            continue;
        }

    this->Storage->deleteSong(song.id);
    ui->songsList->clear();
    clearLabels();
    loadSongList();
    loadGroupList();
}

void MainWindow::on_SortBy_clicked()
{
    if(ui->comboBox->currentText() == "date")
        sortByDate();
    else if(ui->comboBox->currentText() == "album")
        sortByAlbum();
    else if(ui->comboBox->currentText() == "rating")
        sortByRating();
    else if(ui->comboBox->currentText() == "alphabet")
        sortByAlphabet();
    else if(ui->comboBox->currentText() == "artist")
        sortByArtist();
}

bool compareByRating(const Song a, const Song b)
{
    if(a.stars > b.stars)
        return true;
    else
        return false;
}

bool compareByAlphabet(const Song a, const Song b)
{
    if(a.songName < b.songName)
        return false;
    else
        return true;
}

bool compareByAlbum(const Song a, const Song b)
{
    if(a.album > b.album)
        return true;
    else
        return false;
}

//unsigned getDateInDays(const Song song)
//{
//    unsigned date;
//    char ch[2];

//    QString date_str = QString::fromStdString(song.releaseDate);

//    std::cerr << date;
//    return date;
//}

bool compareByDate(const Song a, const Song b)
{
    return false;
}

bool compareByArtist(const Song a, const Song b)
{
    if(a.artistName < b.artistName)
        return true;
    else
        return false;
}

void MainWindow::sortByArtist()
{
    std::vector<Song> songs = Storage->getAllSongs();
    std::sort(songs.begin(), songs.end(), compareByArtist);

    ui->songsList->clear();
    for(size_t i = 0; i < songs.size(); i++)
        ui->songsList->addItem(QString::fromStdString(songs[i].songName));
}

void MainWindow::sortByRating()
{
    std::vector<Song> songs = Storage->getAllSongs();
    std::sort(songs.begin(), songs.end(), compareByRating);

    ui->songsList->clear();
    for(size_t i = 0; i < songs.size(); i++)
        ui->songsList->addItem(QString::fromStdString(songs[i].songName));
}

void MainWindow::sortByDate()
{
    std::vector<Song> songs = Storage->getAllSongs();
    std::sort(songs.begin(), songs.end(), compareByDate);

    ui->songsList->clear();
    for(size_t i = 0; i < songs.size(); i++)
        ui->songsList->addItem(QString::fromStdString(songs[i].songName));
}

void MainWindow::sortByAlbum()
{
    std::vector<Song> songs = Storage->getAllSongs();
    std::sort(songs.begin(), songs.end(), compareByAlbum);

    ui->songsList->clear();
    for(size_t i = 0; i < songs.size(); i++)
        ui->songsList->addItem(QString::fromStdString(songs[i].songName));
}

void MainWindow::sortByAlphabet()
{
    std::vector<Song> songs = Storage->getAllSongs();
    std::sort(songs.begin(), songs.end(), compareByAlphabet);

    ui->songsList->clear();
    for(size_t i = 0; i < songs.size(); i++)
        ui->songsList->addItem(QString::fromStdString(songs[i].songName));
}

void MainWindow::loadGroupList()
{
    std::vector<Song> songs = Storage->getAllSongs();
    std::string names[100];
    ui->groupList->clear();

    for(size_t i = 0; i < songs.size(); i++)
        names[i] = songs[i].artistName;

    std::set<std::string> set(names, names + sizeof(names) / sizeof(names[0]));

    for ( const auto &s : set )
        ui->groupList->addItem(QString::fromStdString(s));
}

void MainWindow::loadGroups()
{
    std::vector<Song> songs = Storage->getAllSongs();
    Group newGroup;

    for(size_t i = 0; i < songs.size(); i++)
    {
        groups.push_back(newGroup);
        if(groups[i].name != songs[i].artistName)
        {
            newGroup.name = songs[i].artistName;
        }
        else
        {
            newGroup.songs.push_back(songs[i]);
        }
    }
}
