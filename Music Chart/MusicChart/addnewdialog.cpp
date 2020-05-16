#include "addnewdialog.hpp"
#include "ui_addnewdialog.h"
#include <QRegExpValidator>

AddNewDialog::AddNewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewDialog)
{
    ui->setupUi(this);
}

AddNewDialog::~AddNewDialog()
{
    delete ui;
}

void AddNewDialog::on_buttonBox_accepted()
{
    sendSong();
    this->close();
}

void AddNewDialog::validate()
{
    QRegExp rx("[1-9\\{.}]");
    QRegExpValidator v(rx, 0);

    if(ui->lineEditAlbumName->text().isEmpty() || ui->lineEditArtistName->text().isEmpty() || ui->lineEditDate->text().isEmpty())
    {
        QMessageBox::warning(0, "Warning", "All fields must not be empty");
        this->reject();
    }

    QString date = ui->lineEditDate->text();
//    if(v.validate(date, 0) != QRegExpValidator::Acceptable)
//        QMessageBox::warning(0, "Warning", "Date must be in DD.MM.YYYY format");
}

Song AddNewDialog::sendSong()
{
    validate();

    Song song;
    song.album = ui->lineEditAlbumName->text().toStdString();
    song.artistName = ui->lineEditArtistName->text().toStdString();
    song.releaseDate = ui->lineEditDate->text().toStdString();
    song.songName = ui->lineEditSongName->text().toStdString();
    song.stars = ui->SpinBoxRating->value();

    return song;
}

void AddNewDialog::on_buttonBox_rejected()
{
    this->reject();
}
