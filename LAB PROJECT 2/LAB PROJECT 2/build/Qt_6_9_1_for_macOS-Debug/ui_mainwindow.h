/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_grid;
    QSpinBox *spinBox_gridSize;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QComboBox *difficulty_comboBox;
    QSpacerItem *verticalSpacer;
    QPushButton *startGame_button;
    QPushButton *reset_button;
    QPushButton *leaderboard_button;
    QPushButton *instructions_button;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *health_label_text;
    QLabel *health_label_value;
    QLabel *score_label_text;
    QLabel *score_label_value;
    QLabel *kill_label_text;
    QLabel *kill_label_value;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(730, 601);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QLabel(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(11, 25, 501, 501));
        frame->setMinimumSize(QSize(501, 501));
        frame->setMaximumSize(QSize(501, 501));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(530, 30, 181, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_grid = new QLabel(layoutWidget);
        label_grid->setObjectName("label_grid");

        verticalLayout->addWidget(label_grid);

        spinBox_gridSize = new QSpinBox(layoutWidget);
        spinBox_gridSize->setObjectName("spinBox_gridSize");
        spinBox_gridSize->setMinimum(10);
        spinBox_gridSize->setMaximum(30);
        spinBox_gridSize->setSingleStep(5);
        spinBox_gridSize->setValue(20);

        verticalLayout->addWidget(spinBox_gridSize);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        difficulty_comboBox = new QComboBox(layoutWidget);
        difficulty_comboBox->setObjectName("difficulty_comboBox");

        verticalLayout->addWidget(difficulty_comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        startGame_button = new QPushButton(layoutWidget);
        startGame_button->setObjectName("startGame_button");

        verticalLayout->addWidget(startGame_button);

        reset_button = new QPushButton(layoutWidget);
        reset_button->setObjectName("reset_button");

        verticalLayout->addWidget(reset_button);

        leaderboard_button = new QPushButton(layoutWidget);
        leaderboard_button->setObjectName("leaderboard_button");

        verticalLayout->addWidget(leaderboard_button);

        instructions_button = new QPushButton(layoutWidget);
        instructions_button->setObjectName("instructions_button");

        verticalLayout->addWidget(instructions_button);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(520, 490, 201, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        health_label_text = new QLabel(horizontalLayoutWidget);
        health_label_text->setObjectName("health_label_text");
        QFont font;
        font.setPointSize(10);
        health_label_text->setFont(font);

        horizontalLayout->addWidget(health_label_text);

        health_label_value = new QLabel(horizontalLayoutWidget);
        health_label_value->setObjectName("health_label_value");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        health_label_value->setFont(font1);

        horizontalLayout->addWidget(health_label_value);

        score_label_text = new QLabel(horizontalLayoutWidget);
        score_label_text->setObjectName("score_label_text");
        score_label_text->setFont(font);

        horizontalLayout->addWidget(score_label_text);

        score_label_value = new QLabel(horizontalLayoutWidget);
        score_label_value->setObjectName("score_label_value");
        score_label_value->setFont(font1);

        horizontalLayout->addWidget(score_label_value);

        kill_label_text = new QLabel(horizontalLayoutWidget);
        kill_label_text->setObjectName("kill_label_text");
        kill_label_text->setFont(font);

        horizontalLayout->addWidget(kill_label_text);

        kill_label_value = new QLabel(horizontalLayoutWidget);
        kill_label_value->setObjectName("kill_label_value");
        kill_label_value->setFont(font1);

        horizontalLayout->addWidget(kill_label_value);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SPACEWAR!", nullptr));
        frame->setText(QString());
        label_grid->setText(QCoreApplication::translate("MainWindow", "Grid Size (pixels):", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Difficulty:", nullptr));
        startGame_button->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        reset_button->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        leaderboard_button->setText(QCoreApplication::translate("MainWindow", "Show Leaderboard", nullptr));
        instructions_button->setText(QCoreApplication::translate("MainWindow", "Instructions", nullptr));
        health_label_text->setText(QCoreApplication::translate("MainWindow", "Health:", nullptr));
        health_label_value->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        score_label_text->setText(QCoreApplication::translate("MainWindow", "Score:", nullptr));
        score_label_value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        kill_label_text->setText(QCoreApplication::translate("MainWindow", "Kills:", nullptr));
        kill_label_value->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
