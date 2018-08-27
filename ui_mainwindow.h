/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSaveBook;
    QAction *actLoadBook;
    QAction *actExportRec;
    QAction *actExit;
    QAction *actAddRec;
    QAction *actSearchTag;
    QAction *actSearchIngrs;
    QAction *actSearchExt;
    QAction *actSaveBookAs;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *searchLineEdit;
    QListWidget *recipeListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *pictureLabel;
    QTextBrowser *descriptTextEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuSearch;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 333);
        actSaveBook = new QAction(MainWindow);
        actSaveBook->setObjectName(QStringLiteral("actSaveBook"));
        actLoadBook = new QAction(MainWindow);
        actLoadBook->setObjectName(QStringLiteral("actLoadBook"));
        actExportRec = new QAction(MainWindow);
        actExportRec->setObjectName(QStringLiteral("actExportRec"));
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QStringLiteral("actExit"));
        actAddRec = new QAction(MainWindow);
        actAddRec->setObjectName(QStringLiteral("actAddRec"));
        actSearchTag = new QAction(MainWindow);
        actSearchTag->setObjectName(QStringLiteral("actSearchTag"));
        actSearchIngrs = new QAction(MainWindow);
        actSearchIngrs->setObjectName(QStringLiteral("actSearchIngrs"));
        actSearchExt = new QAction(MainWindow);
        actSearchExt->setObjectName(QStringLiteral("actSearchExt"));
        actSaveBookAs = new QAction(MainWindow);
        actSaveBookAs->setObjectName(QStringLiteral("actSaveBookAs"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        searchLineEdit = new QLineEdit(centralWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        verticalLayout->addWidget(searchLineEdit);

        recipeListWidget = new QListWidget(centralWidget);
        recipeListWidget->setObjectName(QStringLiteral("recipeListWidget"));

        verticalLayout->addWidget(recipeListWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pictureLabel = new QLabel(centralWidget);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));

        verticalLayout_2->addWidget(pictureLabel);

        descriptTextEdit = new QTextBrowser(centralWidget);
        descriptTextEdit->setObjectName(QStringLiteral("descriptTextEdit"));

        verticalLayout_2->addWidget(descriptTextEdit);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuSearch = new QMenu(menuTools);
        menuSearch->setObjectName(QStringLiteral("menuSearch"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuFile->addAction(actSaveBook);
        menuFile->addAction(actSaveBookAs);
        menuFile->addAction(actLoadBook);
        menuFile->addSeparator();
        menuFile->addAction(actExportRec);
        menuFile->addSeparator();
        menuFile->addAction(actExit);
        menuTools->addAction(actAddRec);
        menuTools->addSeparator();
        menuTools->addAction(menuSearch->menuAction());
        menuSearch->addAction(actSearchTag);
        menuSearch->addAction(actSearchIngrs);
        menuSearch->addAction(actSearchExt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actSaveBook->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actSaveBook->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actLoadBook->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actLoadBook->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actExportRec->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\200\320\265\321\206\320\265\320\277\321\202", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actExportRec->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        actAddRec->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\321\206\320\265\320\277\321\202", Q_NULLPTR));
        actSearchTag->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\202\321\215\320\263\321\203", Q_NULLPTR));
        actSearchIngrs->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\270\320\275\320\263\321\200\320\270\320\264\320\270\320\265\320\275\321\202\320\260\320\274", Q_NULLPTR));
        actSearchExt->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\275\321\213\320\271 \320\277\320\276\320\270\321\201\320\272", Q_NULLPTR));
        actSaveBookAs->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203 \320\272\320\260\320\272...", Q_NULLPTR));
        searchLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", Q_NULLPTR));
        pictureLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        descriptTextEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\200\320\265\321\206\320\265\320\277\321\202\320\260...", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213", Q_NULLPTR));
        menuSearch->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
