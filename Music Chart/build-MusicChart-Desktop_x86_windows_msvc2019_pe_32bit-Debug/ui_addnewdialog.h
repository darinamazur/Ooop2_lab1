/********************************************************************************
** Form generated from reading UI file 'addnewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDIALOG_H
#define UI_ADDNEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEditSongName;
    QLineEdit *lineEditAlbumName;
    QLineEdit *lineEditDate;
    QLineEdit *lineEditArtistName;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QDoubleSpinBox *SpinBoxRating;

    void setupUi(QDialog *AddNewDialog)
    {
        if (AddNewDialog->objectName().isEmpty())
            AddNewDialog->setObjectName(QString::fromUtf8("AddNewDialog"));
        AddNewDialog->resize(402, 231);
        buttonBox = new QDialogButtonBox(AddNewDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 190, 380, 40));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(AddNewDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 380, 152));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditSongName = new QLineEdit(gridLayoutWidget);
        lineEditSongName->setObjectName(QString::fromUtf8("lineEditSongName"));

        gridLayout->addWidget(lineEditSongName, 0, 1, 1, 1);

        lineEditAlbumName = new QLineEdit(gridLayoutWidget);
        lineEditAlbumName->setObjectName(QString::fromUtf8("lineEditAlbumName"));

        gridLayout->addWidget(lineEditAlbumName, 3, 1, 1, 1);

        lineEditDate = new QLineEdit(gridLayoutWidget);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));

        gridLayout->addWidget(lineEditDate, 2, 1, 1, 1);

        lineEditArtistName = new QLineEdit(gridLayoutWidget);
        lineEditArtistName->setObjectName(QString::fromUtf8("lineEditArtistName"));

        gridLayout->addWidget(lineEditArtistName, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        SpinBoxRating = new QDoubleSpinBox(gridLayoutWidget);
        SpinBoxRating->setObjectName(QString::fromUtf8("SpinBoxRating"));
        SpinBoxRating->setMaximum(5.000000000000000);
        SpinBoxRating->setSingleStep(0.100000000000000);

        gridLayout->addWidget(SpinBoxRating, 4, 1, 1, 1);


        retranslateUi(AddNewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddNewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddNewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddNewDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewDialog)
    {
        AddNewDialog->setWindowTitle(QApplication::translate("AddNewDialog", "Dialog", nullptr));
        label_2->setText(QApplication::translate("AddNewDialog", "Artist:", nullptr));
        label->setText(QApplication::translate("AddNewDialog", "Name:", nullptr));
        lineEditSongName->setText(QString());
        lineEditArtistName->setText(QString());
        label_4->setText(QApplication::translate("AddNewDialog", "Album:", nullptr));
        label_3->setText(QApplication::translate("AddNewDialog", "Rating:", nullptr));
        label_5->setText(QApplication::translate("AddNewDialog", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewDialog: public Ui_AddNewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDIALOG_H
