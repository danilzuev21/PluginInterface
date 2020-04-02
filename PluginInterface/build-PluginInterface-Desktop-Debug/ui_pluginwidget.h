/********************************************************************************
** Form generated from reading UI file 'pluginwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINWIDGET_H
#define UI_PLUGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginWidget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *_pbSettings;

    void setupUi(QWidget *PluginWidget)
    {
        if (PluginWidget->objectName().isEmpty())
            PluginWidget->setObjectName(QStringLiteral("PluginWidget"));
        PluginWidget->resize(400, 300);
        horizontalLayoutWidget = new QWidget(PluginWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 249, 381, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        _pbSettings = new QPushButton(horizontalLayoutWidget);
        _pbSettings->setObjectName(QStringLiteral("_pbSettings"));

        horizontalLayout->addWidget(_pbSettings);


        retranslateUi(PluginWidget);
        QObject::connect(_pbSettings, SIGNAL(clicked()), PluginWidget, SLOT(showSettings()));

        QMetaObject::connectSlotsByName(PluginWidget);
    } // setupUi

    void retranslateUi(QWidget *PluginWidget)
    {
        PluginWidget->setWindowTitle(QApplication::translate("PluginWidget", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PluginWidget", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", Q_NULLPTR));
        _pbSettings->setText(QApplication::translate("PluginWidget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PluginWidget: public Ui_PluginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINWIDGET_H
