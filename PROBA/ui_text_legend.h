/********************************************************************************
** Form generated from reading UI file 'text_legend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_LEGEND_H
#define UI_TEXT_LEGEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Text_Legend
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Legend_label;
    QPushButton *restart_Button;
    QLabel *description_1;
    QLabel *description_2;
    QLabel *description_3;
    QLabel *description_4;
    QLabel *description_5;
    QPushButton *Start_Button;

    void setupUi(QWidget *Text_Legend)
    {
        if (Text_Legend->objectName().isEmpty())
            Text_Legend->setObjectName(QString::fromUtf8("Text_Legend"));
        Text_Legend->resize(600, 700);
        Text_Legend->setMinimumSize(QSize(600, 700));
        Text_Legend->setMaximumSize(QSize(600, 700));
        verticalLayout = new QVBoxLayout(Text_Legend);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(175, -1, -1, -1);
        Legend_label = new QLabel(Text_Legend);
        Legend_label->setObjectName(QString::fromUtf8("Legend_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Legend_label->sizePolicy().hasHeightForWidth());
        Legend_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Legend_label->setFont(font);
        Legend_label->setLayoutDirection(Qt::LeftToRight);
        Legend_label->setStyleSheet(QString::fromUtf8("color: rgb(223, 221, 28);"));
        Legend_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Legend_label);

        restart_Button = new QPushButton(Text_Legend);
        restart_Button->setObjectName(QString::fromUtf8("restart_Button"));
        sizePolicy.setHeightForWidth(restart_Button->sizePolicy().hasHeightForWidth());
        restart_Button->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(restart_Button);


        verticalLayout->addLayout(horizontalLayout);

        description_1 = new QLabel(Text_Legend);
        description_1->setObjectName(QString::fromUtf8("description_1"));
        description_1->setFont(font);
        description_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        description_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        description_1->setWordWrap(true);

        verticalLayout->addWidget(description_1);

        description_2 = new QLabel(Text_Legend);
        description_2->setObjectName(QString::fromUtf8("description_2"));
        description_2->setFont(font);
        description_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        description_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        description_2->setWordWrap(true);

        verticalLayout->addWidget(description_2);

        description_3 = new QLabel(Text_Legend);
        description_3->setObjectName(QString::fromUtf8("description_3"));
        description_3->setFont(font);
        description_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        description_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        description_3->setWordWrap(true);

        verticalLayout->addWidget(description_3);

        description_4 = new QLabel(Text_Legend);
        description_4->setObjectName(QString::fromUtf8("description_4"));
        description_4->setFont(font);
        description_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        description_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        description_4->setWordWrap(true);

        verticalLayout->addWidget(description_4);

        description_5 = new QLabel(Text_Legend);
        description_5->setObjectName(QString::fromUtf8("description_5"));
        description_5->setFont(font);
        description_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        description_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        description_5->setWordWrap(true);

        verticalLayout->addWidget(description_5);

        Start_Button = new QPushButton(Text_Legend);
        Start_Button->setObjectName(QString::fromUtf8("Start_Button"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Start_Button->sizePolicy().hasHeightForWidth());
        Start_Button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Start_Button);


        retranslateUi(Text_Legend);

        QMetaObject::connectSlotsByName(Text_Legend);
    } // setupUi

    void retranslateUi(QWidget *Text_Legend)
    {
        Text_Legend->setWindowTitle(QApplication::translate("Text_Legend", "\320\224\320\265\320\273\320\276", nullptr));
        Legend_label->setText(QApplication::translate("Text_Legend", "\320\236\320\242\320\247\320\225\320\242", nullptr));
        restart_Button->setText(QApplication::translate("Text_Legend", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\321\203\321\201\320\272", nullptr));
        description_1->setText(QApplication::translate("Text_Legend", "<html><head/><body><p><span style=\" color:#ffffff;\">TextLabel</span></p></body></html>", nullptr));
        description_2->setText(QApplication::translate("Text_Legend", "<html><head/><body><p><span style=\" color:#ffffff;\">TextLabel</span></p></body></html>", nullptr));
        description_3->setText(QApplication::translate("Text_Legend", "<html><head/><body><p><span style=\" color:#ffffff;\">TextLabel</span></p></body></html>", nullptr));
        description_4->setText(QApplication::translate("Text_Legend", "<html><head/><body><p><span style=\" color:#ffffff;\">TextLabel</span></p></body></html>", nullptr));
        description_5->setText(QApplication::translate("Text_Legend", "<html><head/><body><p><span style=\" color:#ffffff;\">TextLabel</span></p></body></html>", nullptr));
        Start_Button->setText(QApplication::translate("Text_Legend", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Text_Legend: public Ui_Text_Legend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_LEGEND_H
