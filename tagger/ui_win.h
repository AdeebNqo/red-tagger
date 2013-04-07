/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created: Mon Apr 8 00:57:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *tag_sub;
    QLabel *label;
    QLineEdit *tag_textedit;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QLabel *label_2;
    QLabel *foldername;
    QCommandLinkButton *commandLinkButton;
    QTextEdit *history;
    QWidget *tab_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *win)
    {
        if (win->objectName().isEmpty())
            win->setObjectName(QString::fromUtf8("win"));
        win->resize(400, 300);
        centralWidget = new QWidget(win);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 391, 261));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 0, 187, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tag_sub = new QCheckBox(verticalLayoutWidget_2);
        tag_sub->setObjectName(QString::fromUtf8("tag_sub"));

        verticalLayout_2->addWidget(tag_sub);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        tag_textedit = new QLineEdit(verticalLayoutWidget_2);
        tag_textedit->setObjectName(QString::fromUtf8("tag_textedit"));

        verticalLayout_2->addWidget(tag_textedit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton = new QToolButton(verticalLayoutWidget_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);

        foldername = new QLabel(verticalLayoutWidget_2);
        foldername->setObjectName(QString::fromUtf8("foldername"));

        verticalLayout_2->addWidget(foldername);

        commandLinkButton = new QCommandLinkButton(verticalLayoutWidget_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));

        verticalLayout_2->addWidget(commandLinkButton);

        history = new QTextEdit(tab);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(10, 10, 171, 201));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        win->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(win);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        win->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(win);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        win->setStatusBar(statusBar);

        retranslateUi(win);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(win);
    } // setupUi

    void retranslateUi(QMainWindow *win)
    {
        win->setWindowTitle(QApplication::translate("win", "win", 0, QApplication::UnicodeUTF8));
        tag_sub->setText(QApplication::translate("win", "Tag subfolders", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("win", " Tag Value", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("win", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("win", "Choose folder", 0, QApplication::UnicodeUTF8));
        foldername->setText(QString());
        commandLinkButton->setText(QApplication::translate("win", "Tag!", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("win", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("win", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class win: public Ui_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
