#ifndef SETTINGSWIDGET_H
#define SETTINGSWIDGET_H

#include <QDialog>
#include "settings.h"

namespace Ui {
class SettingsWidget;
}

class SettingsWidget : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Конструктор объекта класса SettingsWidget
     * \param settingsList Список настроек, взятый из файла или вновь созданный.
     * \param parent
     * Располагает на виджете список настроек в формате название-значение.
     * Название находится на объекте QLabel. Значение находится в объекте с редактируемым полем,
     * которое зависит от типа значения настройки.
     */
    explicit SettingsWidget(QList<Settings> settingsList, QWidget *parent = 0);
    ~SettingsWidget();

private:
    Ui::SettingsWidget *ui;
};

#endif // SETTINGSWIDGET_H
