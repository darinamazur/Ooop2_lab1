/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 450);
        MainWindow->setMinimumSize(QSize(1100, 450));
        MainWindow->setMaximumSize(QSize(1100, 450));
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(235, 235, 235);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        songsList = new QListWidget(centralWidget);
        songsList->setObjectName(QStringLiteral("songsList"));
        songsList->setGeometry(QRect(10, 10, 300, 410));
        AddNewSong = new QPushButton(centralWidget);
        AddNewSong->setObjectName(QStringLiteral("AddNewSong"));
        AddNewSong->setGeometry(QRect(320, 50, 89, 25));
        DeleteSong = new QPushButton(centralWidget);
        DeleteSong->setObjectName(QStringLiteral("DeleteSong"));
        DeleteSong->setGeometry(QRect(320, 80, 89, 25));
        songAlbumName = new QLabel(centralWidget);
        songAlbumName->setObjectName(QStringLiteral("songAlbumName"));
        songAlbumName->setGeometry(QRect(400, 335, 220, 17));
        labelArtist = new QLabel(centralWidget);
        labelArtist->setObjectName(QStringLiteral("labelArtist"));
        labelArtist->setGeometry(QRect(321, 291, 36, 17));
        labelAlbum = new QLabel(centralWidget);
        labelAlbum->setObjectName(QStringLiteral("labelAlbum"));
        labelAlbum->setGeometry(QRect(321, 335, 49, 17));
        labelDate = new QLabel(centralWidget);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(321, 380, 37, 17));
        songName = new QLabel(centralWidget);
        songName->setObjectName(QStringLiteral("songName"));
        songName->setGeometry(QRect(400, 201, 220, 17));
        songStars = new QLabel(centralWidget);
        songStars->setObjectName(QStringLiteral("songStars"));
        songStars->setGeometry(QRect(400, 246, 220, 20));
        songArtistName = new QLabel(centralWidget);
        songArtistName->setObjectName(QStringLiteral("songArtistName"));
        songArtistName->setGeometry(QRect(400, 291, 220, 17));
        songReleaseDate = new QLabel(centralWidget);
        songReleaseDate->setObjectName(QStringLiteral("songReleaseDate"));
        songReleaseDate->setGeometry(QRect(400, 380, 220, 17));
        labelSong = new QLabel(centralWidget);
        labelSong->setObjectName(QStringLiteral("labelSong"));
        labelSong->setGeometry(QRect(321, 201, 38, 17));
        labelRating = new QLabel(centralWidget);
        labelRating->setObjectName(QStringLiteral("labelRating"));
        labelRating->setGeometry(QRect(321, 246, 48, 17));
        SortBy = new QPushButton(centralWidget);
        SortBy->setObjectName(QStringLiteral("SortBy"));
        SortBy->setGeometry(QRect(320, 110, 89, 25));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(320, 140, 90, 25));
        comboBox->setStyleSheet(QLatin1String("selection-background-color: rgb(0, 0, 205);\n"
"selection-color: rgb(255, 255, 255);"));
        groupList = new QListWidget(centralWidget);
        groupList->setObjectName(QStringLiteral("groupList"));
        groupList->setGeometry(QRect(790, 10, 300, 170));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(690, 10, 90, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 10, 90, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1100, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Music Chart", Q_NULLPTR));
        AddNewSong->setText(QApplication::translate("MainWindow", "Add New", Q_NULLPTR));
        DeleteSong->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        songAlbumName->setText(QApplication::translate("MainWindow", "//album", Q_NULLPTR));
        labelArtist->setText(QApplication::translate("MainWindow", "Artist:", Q_NULLPTR));
        labelAlbum->setText(QApplication::translate("MainWindow", "Album:", Q_NULLPTR));
        labelDate->setText(QApplication::translate("MainWindow", "Date:", Q_NULLPTR));
        songName->setText(QApplication::translate("MainWindow", "//songName", Q_NULLPTR));
        songStars->setText(QApplication::translate("MainWindow", "//stars", Q_NULLPTR));
        songArtistName->setText(QApplication::translate("MainWindow", "//artistName", Q_NULLPTR));
        songReleaseDate->setText(QApplication::translate("MainWindow", "//releaseDate", Q_NULLPTR));
        labelSong->setText(QApplication::translate("MainWindow", "Song:", Q_NULLPTR));
        labelRating->setText(QApplication::translate("MainWindow", "Rating:", Q_NULLPTR));
        SortBy->setText(QApplication::translate("MainWindow", "Sort by", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "album", Q_NULLPTR)
         << QApplication::translate("MainWindow", "rating", Q_NULLPTR)
         << QApplication::translate("MainWindow", "alphabet", Q_NULLPTR)
         << QApplication::translate("MainWindow", "none", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "Groups:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Songs:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
