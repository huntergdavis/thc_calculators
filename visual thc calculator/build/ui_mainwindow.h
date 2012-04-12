/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Oct 17 17:44:39 2007
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget0;
    QHBoxLayout *hboxLayout;
    QPushButton *simulateButton;
    QCheckBox *smokeCheckBox;
    QSpinBox *simulateSpinBox;
    QWidget *layoutWidget1;
    QHBoxLayout *hboxLayout1;
    QPushButton *enterContentButton;
    QSpinBox *contentSpinBox;
    QWidget *layoutWidget2;
    QHBoxLayout *hboxLayout2;
    QPushButton *smokeButton;
    QPushButton *nonSmokeButton;
    QWidget *layoutWidget3;
    QVBoxLayout *vboxLayout;
    QLabel *HistoryLabel;
    QListWidget *historyListWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget4;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout3;
    QLabel *thLabel;
    QLCDNumber *percentLcdNumber;
    QHBoxLayout *hboxLayout4;
    QLabel *dayPassLabel;
    QLCDNumber *passLcdNumber;
    QHBoxLayout *hboxLayout5;
    QLabel *dayLabel;
    QLCDNumber *dayLcdNumber;
    QPushButton *clearButton;
    QWidget *layoutWidget5;
    QHBoxLayout *hboxLayout6;
    QHBoxLayout *hboxLayout7;
    QPushButton *daysTillButton;
    QCheckBox *tillSmokeCheckBox;
    QSpinBox *daysTillSpinBox;
    QLCDNumber *daysTillLcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(510, 385);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    layoutWidget0 = new QWidget(centralwidget);
    layoutWidget0->setObjectName(QString::fromUtf8("layoutWidget0"));
    layoutWidget0->setGeometry(QRect(20, 50, 249, 31));
    hboxLayout = new QHBoxLayout(layoutWidget0);
#ifndef Q_OS_MAC
    hboxLayout->setSpacing(6);
#endif
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    simulateButton = new QPushButton(layoutWidget0);
    simulateButton->setObjectName(QString::fromUtf8("simulateButton"));

    hboxLayout->addWidget(simulateButton);

    smokeCheckBox = new QCheckBox(layoutWidget0);
    smokeCheckBox->setObjectName(QString::fromUtf8("smokeCheckBox"));
    smokeCheckBox->setTristate(false);

    hboxLayout->addWidget(smokeCheckBox);

    simulateSpinBox = new QSpinBox(layoutWidget0);
    simulateSpinBox->setObjectName(QString::fromUtf8("simulateSpinBox"));

    hboxLayout->addWidget(simulateSpinBox);

    layoutWidget1 = new QWidget(centralwidget);
    layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
    layoutWidget1->setGeometry(QRect(20, 10, 219, 31));
    hboxLayout1 = new QHBoxLayout(layoutWidget1);
#ifndef Q_OS_MAC
    hboxLayout1->setSpacing(6);
#endif
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setContentsMargins(0, 0, 0, 0);
    enterContentButton = new QPushButton(layoutWidget1);
    enterContentButton->setObjectName(QString::fromUtf8("enterContentButton"));

    hboxLayout1->addWidget(enterContentButton);

    contentSpinBox = new QSpinBox(layoutWidget1);
    contentSpinBox->setObjectName(QString::fromUtf8("contentSpinBox"));
    contentSpinBox->setMaximum(999);

    hboxLayout1->addWidget(contentSpinBox);

    layoutWidget2 = new QWidget(centralwidget);
    layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
    layoutWidget2->setGeometry(QRect(20, 90, 196, 29));
    hboxLayout2 = new QHBoxLayout(layoutWidget2);
#ifndef Q_OS_MAC
    hboxLayout2->setSpacing(6);
#endif
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    hboxLayout2->setContentsMargins(0, 0, 0, 0);
    smokeButton = new QPushButton(layoutWidget2);
    smokeButton->setObjectName(QString::fromUtf8("smokeButton"));

    hboxLayout2->addWidget(smokeButton);

    nonSmokeButton = new QPushButton(layoutWidget2);
    nonSmokeButton->setObjectName(QString::fromUtf8("nonSmokeButton"));

    hboxLayout2->addWidget(nonSmokeButton);

    layoutWidget3 = new QWidget(centralwidget);
    layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
    layoutWidget3->setGeometry(QRect(20, 170, 258, 217));
    vboxLayout = new QVBoxLayout(layoutWidget3);
#ifndef Q_OS_MAC
    vboxLayout->setSpacing(6);
#endif
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    HistoryLabel = new QLabel(layoutWidget3);
    HistoryLabel->setObjectName(QString::fromUtf8("HistoryLabel"));

    vboxLayout->addWidget(HistoryLabel);

    historyListWidget = new QListWidget(layoutWidget3);
    historyListWidget->setObjectName(QString::fromUtf8("historyListWidget"));

    vboxLayout->addWidget(historyListWidget);

    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(310, 0, 191, 121));
    layoutWidget4 = new QWidget(groupBox);
    layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
    layoutWidget4->setGeometry(QRect(10, 20, 177, 91));
    vboxLayout1 = new QVBoxLayout(layoutWidget4);
#ifndef Q_OS_MAC
    vboxLayout1->setSpacing(6);
#endif
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(0, 0, 0, 0);
    vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
    vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    vboxLayout2->setMargin(0);
#endif
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    hboxLayout3->setMargin(0);
#endif
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    thLabel = new QLabel(layoutWidget4);
    thLabel->setObjectName(QString::fromUtf8("thLabel"));

    hboxLayout3->addWidget(thLabel);

    percentLcdNumber = new QLCDNumber(layoutWidget4);
    percentLcdNumber->setObjectName(QString::fromUtf8("percentLcdNumber"));

    hboxLayout3->addWidget(percentLcdNumber);


    vboxLayout2->addLayout(hboxLayout3);

    hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout4->setSpacing(6);
#endif
    hboxLayout4->setMargin(0);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    dayPassLabel = new QLabel(layoutWidget4);
    dayPassLabel->setObjectName(QString::fromUtf8("dayPassLabel"));

    hboxLayout4->addWidget(dayPassLabel);

    passLcdNumber = new QLCDNumber(layoutWidget4);
    passLcdNumber->setObjectName(QString::fromUtf8("passLcdNumber"));

    hboxLayout4->addWidget(passLcdNumber);


    vboxLayout2->addLayout(hboxLayout4);


    vboxLayout1->addLayout(vboxLayout2);

    hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout5->setSpacing(6);
#endif
    hboxLayout5->setMargin(0);
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    dayLabel = new QLabel(layoutWidget4);
    dayLabel->setObjectName(QString::fromUtf8("dayLabel"));

    hboxLayout5->addWidget(dayLabel);

    dayLcdNumber = new QLCDNumber(layoutWidget4);
    dayLcdNumber->setObjectName(QString::fromUtf8("dayLcdNumber"));
    dayLcdNumber->setProperty("value", QVariant(1));
    dayLcdNumber->setProperty("intValue", QVariant(1));

    hboxLayout5->addWidget(dayLcdNumber);


    vboxLayout1->addLayout(hboxLayout5);

    clearButton = new QPushButton(centralwidget);
    clearButton->setObjectName(QString::fromUtf8("clearButton"));
    clearButton->setGeometry(QRect(390, 130, 61, 27));
    layoutWidget5 = new QWidget(centralwidget);
    layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
    layoutWidget5->setGeometry(QRect(20, 130, 360, 33));
    hboxLayout6 = new QHBoxLayout(layoutWidget5);
#ifndef Q_OS_MAC
    hboxLayout6->setSpacing(6);
#endif
    hboxLayout6->setMargin(0);
    hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
    hboxLayout6->setContentsMargins(0, 0, 0, 0);
    hboxLayout7 = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout7->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    hboxLayout7->setMargin(0);
#endif
    hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
    daysTillButton = new QPushButton(layoutWidget5);
    daysTillButton->setObjectName(QString::fromUtf8("daysTillButton"));

    hboxLayout7->addWidget(daysTillButton);

    tillSmokeCheckBox = new QCheckBox(layoutWidget5);
    tillSmokeCheckBox->setObjectName(QString::fromUtf8("tillSmokeCheckBox"));

    hboxLayout7->addWidget(tillSmokeCheckBox);

    daysTillSpinBox = new QSpinBox(layoutWidget5);
    daysTillSpinBox->setObjectName(QString::fromUtf8("daysTillSpinBox"));
    daysTillSpinBox->setMaximum(999);
    daysTillSpinBox->setMinimum(1);
    daysTillSpinBox->setValue(1);

    hboxLayout7->addWidget(daysTillSpinBox);


    hboxLayout6->addLayout(hboxLayout7);

    daysTillLcdNumber = new QLCDNumber(layoutWidget5);
    daysTillLcdNumber->setObjectName(QString::fromUtf8("daysTillLcdNumber"));

    hboxLayout6->addWidget(daysTillLcdNumber);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 510, 25));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VisiTHCalc", 0, QApplication::UnicodeUTF8));
    simulateButton->setText(QApplication::translate("MainWindow", "Simulate X Days", 0, QApplication::UnicodeUTF8));
    smokeCheckBox->setText(QApplication::translate("MainWindow", "Smoke?", 0, QApplication::UnicodeUTF8));
    enterContentButton->setText(QApplication::translate("MainWindow", "Manually Enter Content", 0, QApplication::UnicodeUTF8));
    smokeButton->setText(QApplication::translate("MainWindow", "Smoke Day", 0, QApplication::UnicodeUTF8));
    nonSmokeButton->setText(QApplication::translate("MainWindow", "Non-Smoke Day", 0, QApplication::UnicodeUTF8));
    HistoryLabel->setText(QApplication::translate("MainWindow", "History", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
    thLabel->setText(QApplication::translate("MainWindow", "THC Percentage", 0, QApplication::UnicodeUTF8));
    dayPassLabel->setText(QApplication::translate("MainWindow", "Days Till Pass", 0, QApplication::UnicodeUTF8));
    dayLabel->setText(QApplication::translate("MainWindow", "Day", 0, QApplication::UnicodeUTF8));
    clearButton->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
    daysTillButton->setText(QApplication::translate("MainWindow", "Days Till X Percentage", 0, QApplication::UnicodeUTF8));
    tillSmokeCheckBox->setText(QApplication::translate("MainWindow", "Smoke?", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

#endif // UI_MAINWINDOW_H
