/********************************************************************************
** Form generated from reading UI file 'dialogrec.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREC_H
#define UI_DIALOGREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "clickableqlabel.h"

QT_BEGIN_NAMESPACE

class Ui_DialogRec
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayoutName;
    QLineEdit *lineEditName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayoutGeneral;
    QVBoxLayout *verticalLayoutActsIngrs;
    QHBoxLayout *horizontalLayoutIngrs;
    QVBoxLayout *verticalLayoutIngrsAdd;
    QLineEdit *lineEditIngrName;
    QPushButton *pushButtonIngrAdd;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidgetIngrs;
    QHBoxLayout *horizontalLayoutActs;
    QVBoxLayout *verticalLayoutActsAdd;
    QLineEdit *lineEditActName;
    QPushButton *pushButtonActAdd;
    QSpacerItem *verticalSpacer_2;
    QListWidget *listWidgetActs;
    QVBoxLayout *verticalLayoutPictsDescr;
    QHBoxLayout *horizontalLayoutPicts;
    QVBoxLayout *verticalLayoutAllPicts;
    ClickableQLabel *labelPictFocus;
    QTextEdit *textEditDescr;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogRec)
    {
        if (DialogRec->objectName().isEmpty())
            DialogRec->setObjectName(QStringLiteral("DialogRec"));
        DialogRec->resize(725, 424);
        verticalLayout_6 = new QVBoxLayout(DialogRec);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayoutName = new QHBoxLayout();
        horizontalLayoutName->setObjectName(QStringLiteral("horizontalLayoutName"));
        lineEditName = new QLineEdit(DialogRec);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        horizontalLayoutName->addWidget(lineEditName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutName->addItem(horizontalSpacer);

        horizontalLayoutName->setStretch(0, 1);
        horizontalLayoutName->setStretch(1, 3);

        verticalLayout_6->addLayout(horizontalLayoutName);

        horizontalLayoutGeneral = new QHBoxLayout();
        horizontalLayoutGeneral->setObjectName(QStringLiteral("horizontalLayoutGeneral"));
        verticalLayoutActsIngrs = new QVBoxLayout();
        verticalLayoutActsIngrs->setObjectName(QStringLiteral("verticalLayoutActsIngrs"));
        verticalLayoutActsIngrs->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutIngrs = new QHBoxLayout();
        horizontalLayoutIngrs->setObjectName(QStringLiteral("horizontalLayoutIngrs"));
        verticalLayoutIngrsAdd = new QVBoxLayout();
        verticalLayoutIngrsAdd->setObjectName(QStringLiteral("verticalLayoutIngrsAdd"));
        lineEditIngrName = new QLineEdit(DialogRec);
        lineEditIngrName->setObjectName(QStringLiteral("lineEditIngrName"));

        verticalLayoutIngrsAdd->addWidget(lineEditIngrName);

        pushButtonIngrAdd = new QPushButton(DialogRec);
        pushButtonIngrAdd->setObjectName(QStringLiteral("pushButtonIngrAdd"));

        verticalLayoutIngrsAdd->addWidget(pushButtonIngrAdd);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutIngrsAdd->addItem(verticalSpacer);


        horizontalLayoutIngrs->addLayout(verticalLayoutIngrsAdd);

        listWidgetIngrs = new QListWidget(DialogRec);
        new QListWidgetItem(listWidgetIngrs);
        new QListWidgetItem(listWidgetIngrs);
        new QListWidgetItem(listWidgetIngrs);
        listWidgetIngrs->setObjectName(QStringLiteral("listWidgetIngrs"));
        listWidgetIngrs->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listWidgetIngrs->setFlow(QListView::TopToBottom);
        listWidgetIngrs->setProperty("isWrapping", QVariant(false));
        listWidgetIngrs->setViewMode(QListView::ListMode);
        listWidgetIngrs->setSelectionRectVisible(false);

        horizontalLayoutIngrs->addWidget(listWidgetIngrs);


        verticalLayoutActsIngrs->addLayout(horizontalLayoutIngrs);

        horizontalLayoutActs = new QHBoxLayout();
        horizontalLayoutActs->setObjectName(QStringLiteral("horizontalLayoutActs"));
        verticalLayoutActsAdd = new QVBoxLayout();
        verticalLayoutActsAdd->setObjectName(QStringLiteral("verticalLayoutActsAdd"));
        lineEditActName = new QLineEdit(DialogRec);
        lineEditActName->setObjectName(QStringLiteral("lineEditActName"));

        verticalLayoutActsAdd->addWidget(lineEditActName);

        pushButtonActAdd = new QPushButton(DialogRec);
        pushButtonActAdd->setObjectName(QStringLiteral("pushButtonActAdd"));

        verticalLayoutActsAdd->addWidget(pushButtonActAdd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutActsAdd->addItem(verticalSpacer_2);


        horizontalLayoutActs->addLayout(verticalLayoutActsAdd);

        listWidgetActs = new QListWidget(DialogRec);
        new QListWidgetItem(listWidgetActs);
        new QListWidgetItem(listWidgetActs);
        new QListWidgetItem(listWidgetActs);
        new QListWidgetItem(listWidgetActs);
        listWidgetActs->setObjectName(QStringLiteral("listWidgetActs"));
        listWidgetActs->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayoutActs->addWidget(listWidgetActs);


        verticalLayoutActsIngrs->addLayout(horizontalLayoutActs);

        verticalLayoutActsIngrs->setStretch(0, 1);
        verticalLayoutActsIngrs->setStretch(1, 1);

        horizontalLayoutGeneral->addLayout(verticalLayoutActsIngrs);

        verticalLayoutPictsDescr = new QVBoxLayout();
        verticalLayoutPictsDescr->setObjectName(QStringLiteral("verticalLayoutPictsDescr"));
        horizontalLayoutPicts = new QHBoxLayout();
        horizontalLayoutPicts->setObjectName(QStringLiteral("horizontalLayoutPicts"));
        verticalLayoutAllPicts = new QVBoxLayout();
        verticalLayoutAllPicts->setObjectName(QStringLiteral("verticalLayoutAllPicts"));

        horizontalLayoutPicts->addLayout(verticalLayoutAllPicts);

        labelPictFocus = new ClickableQLabel(DialogRec);
        labelPictFocus->setObjectName(QStringLiteral("labelPictFocus"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelPictFocus->sizePolicy().hasHeightForWidth());
        labelPictFocus->setSizePolicy(sizePolicy);
        labelPictFocus->setMinimumSize(QSize(100, 100));
        labelPictFocus->setAlignment(Qt::AlignCenter);

        horizontalLayoutPicts->addWidget(labelPictFocus);

        horizontalLayoutPicts->setStretch(0, 1);
        horizontalLayoutPicts->setStretch(1, 2);

        verticalLayoutPictsDescr->addLayout(horizontalLayoutPicts);

        textEditDescr = new QTextEdit(DialogRec);
        textEditDescr->setObjectName(QStringLiteral("textEditDescr"));

        verticalLayoutPictsDescr->addWidget(textEditDescr);

        verticalLayoutPictsDescr->setStretch(0, 2);
        verticalLayoutPictsDescr->setStretch(1, 1);

        horizontalLayoutGeneral->addLayout(verticalLayoutPictsDescr);

        horizontalLayoutGeneral->setStretch(0, 2);
        horizontalLayoutGeneral->setStretch(1, 3);

        verticalLayout_6->addLayout(horizontalLayoutGeneral);

        buttonBox = new QDialogButtonBox(DialogRec);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(DialogRec);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRec, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRec, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRec);
    } // setupUi

    void retranslateUi(QDialog *DialogRec)
    {
        DialogRec->setWindowTitle(QApplication::translate("DialogRec", "Dialog", Q_NULLPTR));
        lineEditName->setPlaceholderText(QApplication::translate("DialogRec", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\200\320\265\321\206\320\265\320\277\321\202\320\260...", Q_NULLPTR));
        lineEditIngrName->setPlaceholderText(QApplication::translate("DialogRec", "\320\230\320\275\320\263\321\200\320\270\320\264\320\270\320\265\320\275\321\202...", Q_NULLPTR));
        pushButtonIngrAdd->setText(QApplication::translate("DialogRec", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));

        const bool __sortingEnabled = listWidgetIngrs->isSortingEnabled();
        listWidgetIngrs->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidgetIngrs->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("DialogRec", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidgetIngrs->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("DialogRec", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidgetIngrs->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("DialogRec", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", Q_NULLPTR));
        listWidgetIngrs->setSortingEnabled(__sortingEnabled);

        lineEditActName->setPlaceholderText(QApplication::translate("DialogRec", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265...", Q_NULLPTR));
        pushButtonActAdd->setText(QApplication::translate("DialogRec", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));

        const bool __sortingEnabled1 = listWidgetActs->isSortingEnabled();
        listWidgetActs->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = listWidgetActs->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("DialogRec", "asd", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidgetActs->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("DialogRec", "asdasd", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidgetActs->item(2);
        ___qlistwidgetitem5->setText(QApplication::translate("DialogRec", "asdasdasd", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = listWidgetActs->item(3);
        ___qlistwidgetitem6->setText(QApplication::translate("DialogRec", "asdasdasdasd", Q_NULLPTR));
        listWidgetActs->setSortingEnabled(__sortingEnabled1);

        labelPictFocus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogRec: public Ui_DialogRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREC_H
