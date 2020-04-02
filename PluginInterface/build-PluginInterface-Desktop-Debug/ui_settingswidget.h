/********************************************************************************
** Form generated from reading UI file 'settingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QGridLayout *gridLayout;
    QTableWidget *_twSettings;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *_pbOk;
    QPushButton *_pbCancel;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));
        SettingsWidget->resize(400, 300);
        gridLayout = new QGridLayout(SettingsWidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        _twSettings = new QTableWidget(SettingsWidget);
        _twSettings->setObjectName(QStringLiteral("_twSettings"));

        gridLayout->addWidget(_twSettings, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        _pbOk = new QPushButton(SettingsWidget);
        _pbOk->setObjectName(QStringLiteral("_pbOk"));

        horizontalLayout->addWidget(_pbOk);

        _pbCancel = new QPushButton(SettingsWidget);
        _pbCancel->setObjectName(QStringLiteral("_pbCancel"));

        horizontalLayout->addWidget(_pbCancel);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SettingsWidget);
        QObject::connect(_pbOk, SIGNAL(clicked()), SettingsWidget, SLOT(accept()));
        QObject::connect(_pbCancel, SIGNAL(clicked()), SettingsWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QDialog *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
        _pbOk->setText(QApplication::translate("SettingsWidget", "\320\236\320\272", Q_NULLPTR));
        _pbCancel->setText(QApplication::translate("SettingsWidget", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
