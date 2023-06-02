/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Database_Edit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *Information_block;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *FIO;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *try_counter;
    QPushButton *target_button;
    QLabel *person_portret;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *person_navigate_left;
    QLabel *person_index;
    QPushButton *person_navigate_right;
    QLabel *Full_Name;
    QLabel *Full_Address;
    QLabel *Crime_Location;
    QLabel *Crime_Type;
    QLabel *Person_File;
    QScrollBar *verticalScrollBar;
    QScrollArea *Filter_block;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QComboBox *comboBox_sex;
    QComboBox *comboBox_scars;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *comboBox_skin_color;
    QComboBox *comboBox_hair_color;
    QComboBox *comboBox_main_hand;
    QComboBox *comboBox_crime_date;
    QComboBox *comboBox_crime_house;
    QComboBox *comboBox_crime_street;
    QComboBox *comboBox_crime_city;
    QComboBox *comboBox_crime_type;
    QPushButton *Filter_Button;
    QLabel *Not_Exist;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1100, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1100, 700));
        MainWindow->setMaximumSize(QSize(1100, 700));
        Database_Edit = new QAction(MainWindow);
        Database_Edit->setObjectName(QString::fromUtf8("Database_Edit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(580, 363));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Information_block = new QScrollArea(centralwidget);
        Information_block->setObjectName(QString::fromUtf8("Information_block"));
        sizePolicy.setHeightForWidth(Information_block->sizePolicy().hasHeightForWidth());
        Information_block->setSizePolicy(sizePolicy);
        Information_block->setMinimumSize(QSize(1082, 318));
        Information_block->setMaximumSize(QSize(1082, 318));
        Information_block->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1080, 316));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy1);
        FIO = new QLabel(scrollAreaWidgetContents_2);
        FIO->setObjectName(QString::fromUtf8("FIO"));
        FIO->setEnabled(true);
        FIO->setGeometry(QRect(250, 20, 49, 26));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        FIO->setFont(font);
        FIO->setLayoutDirection(Qt::LeftToRight);
        FIO->setAutoFillBackground(false);
        FIO->setStyleSheet(QString::fromUtf8("color: rgb(223, 221, 28);\n"
""));
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 50, 65, 26));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(223, 221, 28);"));
        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 100, 434, 26));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(223, 221, 28);"));
        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 160, 190, 26));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(223, 221, 28);"));
        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 220, 67, 26));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(223, 221, 28);"));
        try_counter = new QLabel(scrollAreaWidgetContents_2);
        try_counter->setObjectName(QString::fromUtf8("try_counter"));
        try_counter->setGeometry(QRect(909, 250, 141, 26));
        try_counter->setFont(font);
        try_counter->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        try_counter->setAlignment(Qt::AlignCenter);
        target_button = new QPushButton(scrollAreaWidgetContents_2);
        target_button->setObjectName(QString::fromUtf8("target_button"));
        target_button->setGeometry(QRect(930, 50, 100, 200));
        person_portret = new QLabel(scrollAreaWidgetContents_2);
        person_portret->setObjectName(QString::fromUtf8("person_portret"));
        person_portret->setGeometry(QRect(30, 16, 190, 240));
        sizePolicy1.setHeightForWidth(person_portret->sizePolicy().hasHeightForWidth());
        person_portret->setSizePolicy(sizePolicy1);
        person_portret->setStyleSheet(QString::fromUtf8("image:url(\"./image/base_avatar.png\");\n"
""));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 260, 191, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        person_navigate_left = new QPushButton(horizontalLayoutWidget);
        person_navigate_left->setObjectName(QString::fromUtf8("person_navigate_left"));
        person_navigate_left->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(person_navigate_left->sizePolicy().hasHeightForWidth());
        person_navigate_left->setSizePolicy(sizePolicy2);
        person_navigate_left->setMaximumSize(QSize(16, 30));
        person_navigate_left->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"color: grey;\n"
"background-image: url(./image/but_left.png) 3 10 3 10;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent;\n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;\n"
"}"));

        horizontalLayout->addWidget(person_navigate_left);

        person_index = new QLabel(horizontalLayoutWidget);
        person_index->setObjectName(QString::fromUtf8("person_index"));
        sizePolicy1.setHeightForWidth(person_index->sizePolicy().hasHeightForWidth());
        person_index->setSizePolicy(sizePolicy1);
        person_index->setFont(font);
        person_index->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        person_index->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(person_index);

        person_navigate_right = new QPushButton(horizontalLayoutWidget);
        person_navigate_right->setObjectName(QString::fromUtf8("person_navigate_right"));
        person_navigate_right->setEnabled(true);
        sizePolicy.setHeightForWidth(person_navigate_right->sizePolicy().hasHeightForWidth());
        person_navigate_right->setSizePolicy(sizePolicy);
        person_navigate_right->setMaximumSize(QSize(16, 30));
        person_navigate_right->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"color: grey;\n"
"background-image: url(./image/but_right.png) 3 10 3 10;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent;\n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;\n"
"}"));

        horizontalLayout->addWidget(person_navigate_right);

        Full_Name = new QLabel(scrollAreaWidgetContents_2);
        Full_Name->setObjectName(QString::fromUtf8("Full_Name"));
        Full_Name->setGeometry(QRect(330, 20, 581, 26));
        Full_Name->setFont(font);
        Full_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Full_Address = new QLabel(scrollAreaWidgetContents_2);
        Full_Address->setObjectName(QString::fromUtf8("Full_Address"));
        Full_Address->setGeometry(QRect(330, 50, 581, 26));
        Full_Address->setFont(font);
        Full_Address->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Crime_Location = new QLabel(scrollAreaWidgetContents_2);
        Crime_Location->setObjectName(QString::fromUtf8("Crime_Location"));
        Crime_Location->setGeometry(QRect(250, 120, 661, 26));
        Crime_Location->setFont(font);
        Crime_Location->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Crime_Type = new QLabel(scrollAreaWidgetContents_2);
        Crime_Type->setObjectName(QString::fromUtf8("Crime_Type"));
        Crime_Type->setGeometry(QRect(250, 180, 661, 26));
        Crime_Type->setFont(font);
        Crime_Type->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Person_File = new QLabel(scrollAreaWidgetContents_2);
        Person_File->setObjectName(QString::fromUtf8("Person_File"));
        Person_File->setGeometry(QRect(250, 250, 527, 102));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        Person_File->setFont(font1);
        Person_File->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Person_File->setScaledContents(false);
        Person_File->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Person_File->setWordWrap(true);
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents_2);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(1065, 0, 20, 311));
        verticalScrollBar->setMinimum(80);
        verticalScrollBar->setMaximum(100);
        verticalScrollBar->setTracking(true);
        verticalScrollBar->setOrientation(Qt::Vertical);
        verticalScrollBar->setInvertedControls(true);
        Information_block->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(Information_block, 0, 0, 1, 1);

        Filter_block = new QScrollArea(centralwidget);
        Filter_block->setObjectName(QString::fromUtf8("Filter_block"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Filter_block->sizePolicy().hasHeightForWidth());
        Filter_block->setSizePolicy(sizePolicy3);
        Filter_block->setStyleSheet(QString::fromUtf8("image:url(\"./image/layer_down.png\");"));
        Filter_block->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1080, 315));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 30, 198, 21));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comboBox_sex = new QComboBox(scrollAreaWidgetContents);
        comboBox_sex->addItem(QString());
        comboBox_sex->addItem(QString());
        comboBox_sex->addItem(QString());
        comboBox_sex->setObjectName(QString::fromUtf8("comboBox_sex"));
        comboBox_sex->setGeometry(QRect(250, 32, 151, 20));
        sizePolicy.setHeightForWidth(comboBox_sex->sizePolicy().hasHeightForWidth());
        comboBox_sex->setSizePolicy(sizePolicy);
        comboBox_sex->setStyleSheet(QString::fromUtf8(""));
        comboBox_scars = new QComboBox(scrollAreaWidgetContents);
        comboBox_scars->addItem(QString());
        comboBox_scars->addItem(QString());
        comboBox_scars->addItem(QString());
        comboBox_scars->setObjectName(QString::fromUtf8("comboBox_scars"));
        comboBox_scars->setGeometry(QRect(250, 80, 151, 20));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 158, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(500, 30, 177, 21));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 230, 131, 21));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(500, 130, 189, 21));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(500, 80, 172, 21));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(500, 230, 167, 21));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(500, 180, 189, 21));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 180, 99, 21));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 130, 100, 21));
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comboBox_skin_color = new QComboBox(scrollAreaWidgetContents);
        comboBox_skin_color->addItem(QString());
        comboBox_skin_color->addItem(QString());
        comboBox_skin_color->addItem(QString());
        comboBox_skin_color->setObjectName(QString::fromUtf8("comboBox_skin_color"));
        comboBox_skin_color->setGeometry(QRect(250, 130, 151, 20));
        comboBox_hair_color = new QComboBox(scrollAreaWidgetContents);
        comboBox_hair_color->addItem(QString());
        comboBox_hair_color->addItem(QString());
        comboBox_hair_color->addItem(QString());
        comboBox_hair_color->addItem(QString());
        comboBox_hair_color->setObjectName(QString::fromUtf8("comboBox_hair_color"));
        comboBox_hair_color->setGeometry(QRect(250, 180, 151, 20));
        comboBox_main_hand = new QComboBox(scrollAreaWidgetContents);
        comboBox_main_hand->addItem(QString());
        comboBox_main_hand->addItem(QString());
        comboBox_main_hand->addItem(QString());
        comboBox_main_hand->setObjectName(QString::fromUtf8("comboBox_main_hand"));
        comboBox_main_hand->setGeometry(QRect(250, 230, 151, 20));
        comboBox_crime_date = new QComboBox(scrollAreaWidgetContents);
        comboBox_crime_date->addItem(QString());
        comboBox_crime_date->addItem(QString());
        comboBox_crime_date->addItem(QString());
        comboBox_crime_date->addItem(QString());
        comboBox_crime_date->setObjectName(QString::fromUtf8("comboBox_crime_date"));
        comboBox_crime_date->setGeometry(QRect(710, 32, 151, 20));
        comboBox_crime_house = new QComboBox(scrollAreaWidgetContents);
        comboBox_crime_house->addItem(QString());
        comboBox_crime_house->addItem(QString());
        comboBox_crime_house->addItem(QString());
        comboBox_crime_house->addItem(QString());
        comboBox_crime_house->setObjectName(QString::fromUtf8("comboBox_crime_house"));
        comboBox_crime_house->setGeometry(QRect(710, 80, 151, 20));
        comboBox_crime_street = new QComboBox(scrollAreaWidgetContents);
        comboBox_crime_street->addItem(QString());
        comboBox_crime_street->addItem(QString());
        comboBox_crime_street->addItem(QString());
        comboBox_crime_street->addItem(QString());
        comboBox_crime_street->setObjectName(QString::fromUtf8("comboBox_crime_street"));
        comboBox_crime_street->setGeometry(QRect(710, 130, 151, 20));
        comboBox_crime_city = new QComboBox(scrollAreaWidgetContents);
        comboBox_crime_city->addItem(QString());
        comboBox_crime_city->addItem(QString());
        comboBox_crime_city->addItem(QString());
        comboBox_crime_city->addItem(QString());
        comboBox_crime_city->setObjectName(QString::fromUtf8("comboBox_crime_city"));
        comboBox_crime_city->setGeometry(QRect(710, 180, 151, 20));
        comboBox_crime_type = new QComboBox(scrollAreaWidgetContents);
        comboBox_crime_type->addItem(QString());
        comboBox_crime_type->addItem(QString());
        comboBox_crime_type->addItem(QString());
        comboBox_crime_type->addItem(QString());
        comboBox_crime_type->setObjectName(QString::fromUtf8("comboBox_crime_type"));
        comboBox_crime_type->setGeometry(QRect(710, 230, 151, 20));
        Filter_Button = new QPushButton(scrollAreaWidgetContents);
        Filter_Button->setObjectName(QString::fromUtf8("Filter_Button"));
        Filter_Button->setGeometry(QRect(930, 90, 100, 100));
        Not_Exist = new QLabel(scrollAreaWidgetContents);
        Not_Exist->setObjectName(QString::fromUtf8("Not_Exist"));
        Not_Exist->setGeometry(QRect(900, 50, 161, 21));
        Not_Exist->setFont(font2);
        Not_Exist->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        Filter_block->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(Filter_block, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(Database_Edit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Crime Searcher", nullptr));
        Database_Edit->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        FIO->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\220\320\224\320\240\320\225\320\241:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\222\320\240\320\225\320\234\320\257 \320\230 \320\234\320\225\320\241\320\242\320\236 \320\241\320\236\320\222\320\225\320\240\320\250\320\225\320\235\320\230\320\257 \320\237\320\240\320\225\320\241\320\242\320\243\320\237\320\233\320\225\320\235\320\230\320\257:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\242\320\230\320\237 \320\237\320\240\320\225\320\241\320\242\320\243\320\237\320\233\320\225\320\235\320\230\320\257:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\224\320\236\320\241\320\254\320\225:", nullptr));
        try_counter->setText(QString());
        target_button->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\262\320\270\320\275\320\270\321\202\321\214", nullptr));
        person_portret->setText(QString());
        person_navigate_left->setText(QString());
        person_index->setText(QApplication::translate("MainWindow", "(0/0)", nullptr));
        person_navigate_right->setText(QString());
        Full_Name->setText(QApplication::translate("MainWindow", "\320\250\320\270\320\277\320\265\320\275\320\272\320\276 \320\236\320\272\321\201\320\260\320\275\320\260 \320\222\320\273\320\260\320\264\320\270\320\274\320\270\321\200\320\276\320\262\320\275\320\260", nullptr));
        Full_Address->setText(QApplication::translate("MainWindow", "\321\203\320\273. \320\232\320\260\320\273\321\203\320\266\321\201\320\272\320\260\321\217, \320\264. 10, \320\272\320\262. 36, \320\263. \320\222\320\273\320\260\320\264\320\270\320\262\320\276\321\201\321\202\320\276\320\272", nullptr));
        Crime_Location->setText(QApplication::translate("MainWindow", "\321\203\320\273.\320\241\320\265\321\200\320\264\320\270\320\275\320\260, \320\264.29\320\220, \320\272\320\262 55, \320\263.\320\222\320\273\320\260\320\264\320\270\320\262\320\276\321\201\321\202\320\276\320\272", nullptr));
        Crime_Type->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\274\320\276\320\263\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276 \320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\260", nullptr));
        Person_File->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\250\320\270\320\277\320\265\320\275\320\272\320\276 \320\236\320\272\321\201\320\260\320\275\320\260 \320\222\320\273\320\260\320\264\320\270\320\274\320\270\321\200\320\276\320\262\320\275\320\260 \320\275\320\260 \320\277\321\200\320\276\321\202\321\217\320\266\320\265\320\275\320\270\320\270 6-\321\202\320\270</p><p>\320\273\320\265\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\320\273\320\260 \320\274\320\276\321\211\320\265\320\275\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \321\201\320\262\321\217\320\267\320\260\320\275\320\275\321\213\320\265 \321\201</p><p>\320\273\320\276\320\266\320\275\321\213\320\274\320\270 \320\267\320\262\320\276\320\275\320\272\320\260\320\274\320\270 \320\262 \321\201\320\273\321\203\320\266\320\261\321\213 \320\276\320\277\320\265\320\272\320\270 \321\201 \320\277\321\200\320\276\321\201\321\214\320\261\320\260\320\274\320\270 \320"
                        "\267\320\260\320\261\321\200\320\260\321\202\321\214</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\277\320\276\320\273\320\260\320\263\320\260\320\265\320\274\321\213\320\271 \320\277\320\276\320\273:", nullptr));
        comboBox_sex->setItemText(0, QString());
        comboBox_sex->setItemText(1, QApplication::translate("MainWindow", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        comboBox_sex->setItemText(2, QApplication::translate("MainWindow", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271", nullptr));

        comboBox_scars->setItemText(0, QString());
        comboBox_scars->setItemText(1, QApplication::translate("MainWindow", "\320\225\321\201\321\202\321\214", nullptr));
        comboBox_scars->setItemText(2, QApplication::translate("MainWindow", "\320\235\320\265\321\202\321\203", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \321\210\321\200\320\260\320\274\320\276\320\262:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\265\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\260\321\217 \321\200\321\203\320\272\320\260", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\243\320\273\320\270\321\206\320\260 \320\277\321\200\320\265\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217:", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\274 \320\277\321\200\320\265\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217:", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\265\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \320\277\321\200\320\265\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\262\320\276\320\273\320\276\321\201", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\272\320\276\320\266\320\270:", nullptr));
        comboBox_skin_color->setItemText(0, QString());
        comboBox_skin_color->setItemText(1, QApplication::translate("MainWindow", "\320\221\320\265\320\273\321\213\320\271", nullptr));
        comboBox_skin_color->setItemText(2, QApplication::translate("MainWindow", "\320\235\320\265 \320\261\320\265\320\273\321\213\320\271", nullptr));

        comboBox_hair_color->setItemText(0, QString());
        comboBox_hair_color->setItemText(1, QApplication::translate("MainWindow", "\320\221\321\200\321\216\320\275\320\265\321\202", nullptr));
        comboBox_hair_color->setItemText(2, QApplication::translate("MainWindow", "\320\241\320\262\320\265\321\202\320\273\321\213\320\271", nullptr));
        comboBox_hair_color->setItemText(3, QApplication::translate("MainWindow", "\320\236\321\201\320\276\320\261\320\265\320\275\321\213\320\271", nullptr));

        comboBox_main_hand->setItemText(0, QString());
        comboBox_main_hand->setItemText(1, QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217", nullptr));
        comboBox_main_hand->setItemText(2, QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217", nullptr));

        comboBox_crime_date->setItemText(0, QString());
        comboBox_crime_date->setItemText(1, QApplication::translate("MainWindow", "20.11.2000", nullptr));
        comboBox_crime_date->setItemText(2, QApplication::translate("MainWindow", "11.05.1999", nullptr));
        comboBox_crime_date->setItemText(3, QApplication::translate("MainWindow", "05.06.2023", nullptr));

        comboBox_crime_house->setItemText(0, QString());
        comboBox_crime_house->setItemText(1, QApplication::translate("MainWindow", "20", nullptr));
        comboBox_crime_house->setItemText(2, QApplication::translate("MainWindow", "36", nullptr));
        comboBox_crime_house->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));

        comboBox_crime_street->setItemText(0, QString());
        comboBox_crime_street->setItemText(1, QApplication::translate("MainWindow", "\320\233\320\276\320\277\320\260\321\202\320\272\320\270\320\275\320\260", nullptr));
        comboBox_crime_street->setItemText(2, QApplication::translate("MainWindow", "\320\247\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        comboBox_crime_street->setItemText(3, QApplication::translate("MainWindow", "\320\241\320\270\320\262\320\272\320\276\320\262\320\260", nullptr));

        comboBox_crime_city->setItemText(0, QString());
        comboBox_crime_city->setItemText(1, QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\274\321\214", nullptr));
        comboBox_crime_city->setItemText(2, QApplication::translate("MainWindow", "\320\234\320\276\321\201\320\272\320\262\320\260", nullptr));
        comboBox_crime_city->setItemText(3, QApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202\320\276\320\262", nullptr));

        comboBox_crime_type->setItemText(0, QString());
        comboBox_crime_type->setItemText(1, QApplication::translate("MainWindow", "\320\243\320\261\320\270\320\271\321\201\321\202\320\262\320\276", nullptr));
        comboBox_crime_type->setItemText(2, QApplication::translate("MainWindow", "\320\222\321\213\320\274\320\276\320\263\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276", nullptr));
        comboBox_crime_type->setItemText(3, QApplication::translate("MainWindow", "\320\237\320\276\321\202\321\203\321\201\321\202\320\276\321\200\320\276\320\275\320\265\320\265", nullptr));

        Filter_Button->setText(QApplication::translate("MainWindow", "\320\241\320\236\320\237\320\236\320\241\320\242\320\220\320\222\320\230\320\242\320\254\n"
"\320\224\320\220\320\235\320\235\320\253\320\225", nullptr));
        Not_Exist->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\236\321\202\320\273\320\260\320\264\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
