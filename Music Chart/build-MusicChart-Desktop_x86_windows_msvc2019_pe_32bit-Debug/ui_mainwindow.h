/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *songsList;
    QPushButton *AddNewSong;
    QPushButton *DeleteSong;
    QLabel *songAlbumName;
    QLabel *labelArtist;
    QLabel *labelAlbum;
    QLabel *labelDate;
    QLabel *songName;
    QLabel *songStars;
    QLabel *songArtistName;
    QLabel *songReleaseDate;
    QLabel *labelSong;
    QLabel *labelRating;
    QPushButton *SortBy;
    QComboBox *comboBox;
    QListWidget *groupList;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 450);
        MainWindow->setMinimumSize(QSize(1100, 450));
        MainWindow->setMaximumSize(QSize(1100, 450));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 235, 235);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        songsList = new QListWidget(centralWidget);
        songsList->setObjectName(QString::fromUtf8("songsList"));
        songsList->setGeometry(QRect(10, 10, 300, 410));
        AddNewSong = new QPushButton(centralWidget);
        AddNewSong->setObjectName(QString::fromUtf8("AddNewSong"));
        AddNewSong->setGeometry(QRect(320, 50, 89, 25));
        DeleteSong = new QPushButton(centralWidget);
        DeleteSong->setObjectName(QString::fromUtf8("DeleteSong"));
        DeleteSong->setGeometry(QRect(320, 80, 89, 25));
        songAlbumName = new QLabel(centralWidget);
        songAlbumName->setObjectName(QString::fromUtf8("songAlbumName"));
        songAlbumName->setGeometry(QRect(400, 335, 220, 17));
        labelArtist = new QLabel(centralWidget);
        labelArtist->setObjectName(QString::fromUtf8("labelArtist"));
        labelArtist->setGeometry(QRect(321, 291, 36, 17));
        labelAlbum = new QLabel(centralWidget);
        labelAlbum->setObjectName(QString::fromUtf8("labelAlbum"));
        labelAlbum->setGeometry(QRect(321, 335, 49, 17));
        labelDate = new QLabel(centralWidget);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setGeometry(QRect(321, 380, 37, 17));
        songName = new QLabel(centralWidget);
        songName->setObjectName(QString::fromUtf8("songName"));
        songName->setGeometry(QRect(400, 201, 220, 17));
        songStars = new QLabel(centralWidget);
        songStars->setObjectName(QString::fromUtf8("songStars"));
        songStars->setGeometry(QRect(400, 246, 220, 20));
        songArtistName = new QLabel(centralWidget);
        songArtistName->setObjectName(QString::fromUtf8("songArtistName"));
        songArtistName->setGeometry(QRect(400, 291, 220, 17));
        songReleaseDate = new QLabel(centralWidget);
        songReleaseDate->setObjectName(QString::fromUtf8("songReleaseDate"));
        songReleaseDate->setGeometry(QRect(400, 380, 220, 17));
        labelSong = new QLabel(centralWidget);
        labelSong->setObjectName(QString::fromUtf8("labelSong"));
        labelSong->setGeometry(QRect(321, 201, 38, 17));
        labelRating = new QLabel(centralWidget);
        labelRating->setObjectName(QString::fromUtf8("labelRating"));
        labelRating->setGeometry(QRect(321, 246, 48, 17));
        SortBy = new QPushButton(centralWidget);
        SortBy->setObjectName(QString::fromUtf8("SortBy"));
        SortBy->setGeometry(QRect(320, 110, 89, 25));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(320, 140, 90, 25));
        comboBox->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 0, 205);\n"
"selection-color: rgb(255, 255, 255);"));
        groupList = new QListWidget(centralWidget);
        groupList->setObjectName(QString::fromUtf8("groupList"));
        groupList->setGeometry(QRect(790, 10, 300, 170));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(690, 10, 90, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 10, 90, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1100, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Music Chart", nullptr));
        AddNewSong->setText(QApplication::translate("MainWindow", "Add New", nullptr));
        DeleteSong->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        songAlbumName->setText(QApplication::translate("MainWindow", "//album", nullptr));
        labelArtist->setText(QApplication::translate("MainWindow", "Artist:", nullptr));
        labelAlbum->setText(QApplication::translate("MainWindow", "Album:", nullptr));
        labelDate->setText(QApplication::translate("MainWindow", "Date:", nullptr));
        songName->setText(QApplication::translate("MainWindow", "//songName", nullptr));
        songStars->setText(QApplication::translate("MainWindow", "//stars", nullptr));
        songArtistName->setText(QApplication::translate("MainWindow", "//artistName", nullptr));
        songReleaseDate->setText(QApplication::translate("MainWindow", "//releaseDate", nullptr));
        labelSong->setText(QApplication::translate("MainWindow", "Song:", nullptr));
        labelRating->setText(QApplication::translate("MainWindow", "Rating:", nullptr));
        SortBy->setText(QApplication::translate("MainWindow", "Sort by", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "album", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "rating", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "alphabet", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "none", nullptr));

        label->setText(QApplication::translate("MainWindow", "Groups:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Songs:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
