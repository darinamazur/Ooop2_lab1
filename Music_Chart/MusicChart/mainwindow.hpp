#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QListWidgetItem>
#include "sqlstorage.hpp"
#include "addnewdialog.hpp"
#include "group.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //manage info
    void clearLabels();
    void loadSongList();
    void fillLabels();
    void loadGroupList();

    //sort
    void sortByDate();
    void sortByRating();
    void sortByArtist();
    void sortByAlphabet();
    void sortByAlbum();

    //groups
    void loadGroups();

private slots:
    void on_songsList_itemClicked(QListWidgetItem *item);
    void on_AddNewSong_clicked();
    void on_DeleteSong_clicked();
    void on_SortBy_clicked();

private:
    Ui::MainWindow *ui;
    SQLStorage *Storage;
    AddNewDialog *AddDialog;
    Song NewSong;
    std::vector<Group> groups;
};

#endif // MAINWINDOW_HPP
