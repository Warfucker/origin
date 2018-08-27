/********************************************************************************
** Form generated from reading UI file 'dialogyesnocancel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGYESNOCANCEL_H
#define UI_DIALOGYESNOCANCEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogYesNoCancel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogYesNoCancel)
    {
        if (DialogYesNoCancel->objectName().isEmpty())
            DialogYesNoCancel->setObjectName(QStringLiteral("DialogYesNoCancel"));
        DialogYesNoCancel->resize(262, 79);
        verticalLayout = new QVBoxLayout(DialogYesNoCancel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DialogYesNoCancel);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Sunken);
        label->setLineWidth(5);
        label->setMidLineWidth(0);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(DialogYesNoCancel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::No|QDialogButtonBox::Yes);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogYesNoCancel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogYesNoCancel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogYesNoCancel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogYesNoCancel);
    } // setupUi

    void retranslateUi(QDialog *DialogYesNoCancel)
    {
        DialogYesNoCancel->setWindowTitle(QApplication::translate("DialogYesNoCancel", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogYesNoCancel", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogYesNoCancel: public Ui_DialogYesNoCancel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGYESNOCANCEL_H
