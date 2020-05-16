#ifndef ADDNEWDIALOG_HPP
#define ADDNEWDIALOG_HPP

#include <QDialog>
#include <QMessageBox>
#include "song.hpp"

namespace Ui {
class AddNewDialog;
}

class AddNewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewDialog(QWidget *parent = 0);
    ~AddNewDialog();

    Song sendSong();
    void validate();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddNewDialog *ui;
    Song NewSong;
};

#endif // ADDNEWDIALOG_HPP
