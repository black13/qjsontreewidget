/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *honorChildBgColorCheckBox;
    QCheckBox *honorChildFgColorCheckBox;
    QCheckBox *honorChildFontCheckbox;
    QCheckBox *honorParentBgColorCheckBox;
    QCheckBox *honorParentFgColorCheckBox;
    QCheckBox *honorParentFontCheckbox;
    QCheckBox *treatROAsHideCheckBox;
    QCheckBox *honorHideCheckBox;
    QCheckBox *honorReadOnlyCheckBox;
    QCheckBox *honorItemBgColorCheckBox;
    QCheckBox *honorItemFgColorCheckBox;
    QCheckBox *honorItemFontCheckBox;
    QCheckBox *honorColumnBgColorCheckBox;
    QCheckBox *honorColumnFgColorCheckBox;
    QCheckBox *honorColumnFontCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QPushButton *reloadPushButton;
    QPushButton *clearPushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1778, 603);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        honorChildBgColorCheckBox = new QCheckBox(Dialog);
        honorChildBgColorCheckBox->setObjectName(QString::fromUtf8("honorChildBgColorCheckBox"));
        honorChildBgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorChildBgColorCheckBox, 0, 0, 1, 1);

        honorChildFgColorCheckBox = new QCheckBox(Dialog);
        honorChildFgColorCheckBox->setObjectName(QString::fromUtf8("honorChildFgColorCheckBox"));
        honorChildFgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorChildFgColorCheckBox, 0, 1, 1, 1);

        honorChildFontCheckbox = new QCheckBox(Dialog);
        honorChildFontCheckbox->setObjectName(QString::fromUtf8("honorChildFontCheckbox"));
        honorChildFontCheckbox->setChecked(true);

        gridLayout->addWidget(honorChildFontCheckbox, 0, 2, 1, 1);

        honorParentBgColorCheckBox = new QCheckBox(Dialog);
        honorParentBgColorCheckBox->setObjectName(QString::fromUtf8("honorParentBgColorCheckBox"));
        honorParentBgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorParentBgColorCheckBox, 1, 0, 1, 1);

        honorParentFgColorCheckBox = new QCheckBox(Dialog);
        honorParentFgColorCheckBox->setObjectName(QString::fromUtf8("honorParentFgColorCheckBox"));
        honorParentFgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorParentFgColorCheckBox, 1, 1, 1, 1);

        honorParentFontCheckbox = new QCheckBox(Dialog);
        honorParentFontCheckbox->setObjectName(QString::fromUtf8("honorParentFontCheckbox"));
        honorParentFontCheckbox->setChecked(true);

        gridLayout->addWidget(honorParentFontCheckbox, 1, 2, 1, 1);

        treatROAsHideCheckBox = new QCheckBox(Dialog);
        treatROAsHideCheckBox->setObjectName(QString::fromUtf8("treatROAsHideCheckBox"));

        gridLayout->addWidget(treatROAsHideCheckBox, 4, 0, 1, 1);

        honorHideCheckBox = new QCheckBox(Dialog);
        honorHideCheckBox->setObjectName(QString::fromUtf8("honorHideCheckBox"));
        honorHideCheckBox->setChecked(true);

        gridLayout->addWidget(honorHideCheckBox, 4, 1, 1, 1);

        honorReadOnlyCheckBox = new QCheckBox(Dialog);
        honorReadOnlyCheckBox->setObjectName(QString::fromUtf8("honorReadOnlyCheckBox"));
        honorReadOnlyCheckBox->setChecked(true);

        gridLayout->addWidget(honorReadOnlyCheckBox, 4, 2, 1, 1);

        honorItemBgColorCheckBox = new QCheckBox(Dialog);
        honorItemBgColorCheckBox->setObjectName(QString::fromUtf8("honorItemBgColorCheckBox"));
        honorItemBgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorItemBgColorCheckBox, 2, 0, 1, 1);

        honorItemFgColorCheckBox = new QCheckBox(Dialog);
        honorItemFgColorCheckBox->setObjectName(QString::fromUtf8("honorItemFgColorCheckBox"));
        honorItemFgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorItemFgColorCheckBox, 2, 1, 1, 1);

        honorItemFontCheckBox = new QCheckBox(Dialog);
        honorItemFontCheckBox->setObjectName(QString::fromUtf8("honorItemFontCheckBox"));
        honorItemFontCheckBox->setChecked(true);

        gridLayout->addWidget(honorItemFontCheckBox, 2, 2, 1, 1);

        honorColumnBgColorCheckBox = new QCheckBox(Dialog);
        honorColumnBgColorCheckBox->setObjectName(QString::fromUtf8("honorColumnBgColorCheckBox"));
        honorColumnBgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorColumnBgColorCheckBox, 3, 0, 1, 1);

        honorColumnFgColorCheckBox = new QCheckBox(Dialog);
        honorColumnFgColorCheckBox->setObjectName(QString::fromUtf8("honorColumnFgColorCheckBox"));
        honorColumnFgColorCheckBox->setChecked(true);

        gridLayout->addWidget(honorColumnFgColorCheckBox, 3, 1, 1, 1);

        honorColumnFontCheckBox = new QCheckBox(Dialog);
        honorColumnFontCheckBox->setObjectName(QString::fromUtf8("honorColumnFontCheckBox"));
        honorColumnFontCheckBox->setChecked(true);

        gridLayout->addWidget(honorColumnFontCheckBox, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(Dialog);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);

        searchButton = new QPushButton(Dialog);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);


        verticalLayout_2->addLayout(horizontalLayout);

        reloadPushButton = new QPushButton(Dialog);
        reloadPushButton->setObjectName(QString::fromUtf8("reloadPushButton"));

        verticalLayout_2->addWidget(reloadPushButton);

        clearPushButton = new QPushButton(Dialog);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));

        verticalLayout_2->addWidget(clearPushButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        honorChildBgColorCheckBox->setText(QApplication::translate("Dialog", "Honor child background color", 0, QApplication::UnicodeUTF8));
        honorChildFgColorCheckBox->setText(QApplication::translate("Dialog", "Honor child foreground color", 0, QApplication::UnicodeUTF8));
        honorChildFontCheckbox->setText(QApplication::translate("Dialog", "Honor child font", 0, QApplication::UnicodeUTF8));
        honorParentBgColorCheckBox->setText(QApplication::translate("Dialog", "Honor parent background color", 0, QApplication::UnicodeUTF8));
        honorParentFgColorCheckBox->setText(QApplication::translate("Dialog", "Honor parent foreground color", 0, QApplication::UnicodeUTF8));
        honorParentFontCheckbox->setText(QApplication::translate("Dialog", "Honor parent font", 0, QApplication::UnicodeUTF8));
        treatROAsHideCheckBox->setText(QApplication::translate("Dialog", "Treat readonly as 'hide whole row'", 0, QApplication::UnicodeUTF8));
        honorHideCheckBox->setText(QApplication::translate("Dialog", "Honor hide", 0, QApplication::UnicodeUTF8));
        honorReadOnlyCheckBox->setText(QApplication::translate("Dialog", "Honor readonly", 0, QApplication::UnicodeUTF8));
        honorItemBgColorCheckBox->setText(QApplication::translate("Dialog", "Honor item background color", 0, QApplication::UnicodeUTF8));
        honorItemFgColorCheckBox->setText(QApplication::translate("Dialog", "Honor item foreground color", 0, QApplication::UnicodeUTF8));
        honorItemFontCheckBox->setText(QApplication::translate("Dialog", "Honor item font", 0, QApplication::UnicodeUTF8));
        honorColumnBgColorCheckBox->setText(QApplication::translate("Dialog", "Honor column background color", 0, QApplication::UnicodeUTF8));
        honorColumnFgColorCheckBox->setText(QApplication::translate("Dialog", "Honor column foreground color", 0, QApplication::UnicodeUTF8));
        honorColumnFontCheckBox->setText(QApplication::translate("Dialog", "Honor column font", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Search", 0, QApplication::UnicodeUTF8));
        searchLineEdit->setText(QApplication::translate("Dialog", "testbutton1", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("Dialog", "Search", 0, QApplication::UnicodeUTF8));
        reloadPushButton->setText(QApplication::translate("Dialog", "reload", 0, QApplication::UnicodeUTF8));
        clearPushButton->setText(QApplication::translate("Dialog", "clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
