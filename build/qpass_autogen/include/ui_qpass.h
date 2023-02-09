/********************************************************************************
** Form generated from reading UI file 'qpass.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPASS_H
#define UI_QPASS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *password_line;
    QPushButton *generate_button;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *letter;
    QCheckBox *number;
    QCheckBox *symbols;
    QHBoxLayout *horizontalLayout_3;
    QSlider *password_len;
    QSpinBox *len;

    void setupUi(QMainWindow *QPass)
    {
        if (QPass->objectName().isEmpty())
            QPass->setObjectName(QString::fromUtf8("QPass"));
        QPass->resize(358, 118);
        QPass->setMinimumSize(QSize(358, 118));
        QPass->setMaximumSize(QSize(358, 118));
        centralWidget = new QWidget(QPass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        password_line = new QLineEdit(centralWidget);
        password_line->setObjectName(QString::fromUtf8("password_line"));
        password_line->setAlignment(Qt::AlignCenter);
        password_line->setReadOnly(true);

        horizontalLayout->addWidget(password_line);

        generate_button = new QPushButton(centralWidget);
        generate_button->setObjectName(QString::fromUtf8("generate_button"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\270/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        generate_button->setIcon(icon);

        horizontalLayout->addWidget(generate_button);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        letter = new QCheckBox(centralWidget);
        letter->setObjectName(QString::fromUtf8("letter"));
        letter->setChecked(true);

        horizontalLayout_2->addWidget(letter);

        number = new QCheckBox(centralWidget);
        number->setObjectName(QString::fromUtf8("number"));
        number->setChecked(true);

        horizontalLayout_2->addWidget(number);

        symbols = new QCheckBox(centralWidget);
        symbols->setObjectName(QString::fromUtf8("symbols"));
        symbols->setChecked(true);

        horizontalLayout_2->addWidget(symbols);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        password_len = new QSlider(centralWidget);
        password_len->setObjectName(QString::fromUtf8("password_len"));
        password_len->setMinimum(4);
        password_len->setMaximum(100);
        password_len->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(password_len);

        len = new QSpinBox(centralWidget);
        len->setObjectName(QString::fromUtf8("len"));
        len->setMinimum(4);
        len->setMaximum(100);

        horizontalLayout_3->addWidget(len);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        QPass->setCentralWidget(centralWidget);

        retranslateUi(QPass);

        QMetaObject::connectSlotsByName(QPass);
    } // setupUi

    void retranslateUi(QMainWindow *QPass)
    {
        QPass->setWindowTitle(QCoreApplication::translate("QPass", "QPass", nullptr));
        password_line->setText(QCoreApplication::translate("QPass", "PASSWORD", nullptr));
        generate_button->setText(QString());
        letter->setText(QCoreApplication::translate("QPass", "Letter", nullptr));
        number->setText(QCoreApplication::translate("QPass", "Numbers", nullptr));
        symbols->setText(QCoreApplication::translate("QPass", "Symbols", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPass: public Ui_QPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPASS_H
