#ifndef PLUGINWIDGET_H
#define PLUGINWIDGET_H

#include <QWidget>
#include "settingswidget.h"
#include "plugin.h"

namespace Ui {
class PluginWidget;
}
/*!
 * \brief The PluginWidget class
 * Класс отображающий отдельный плагин в виджете.
 */
class PluginWidget : public QWidget
{
    Q_OBJECT

public:
    /*!
     * \brief Конструктор класса PluginWidget
     * \param plugin Плагин, который отображается в виджете.
     * \param parent
     */
    explicit PluginWidget(Plugin plugin, QWidget *parent = 0);
    ~PluginWidget();
public slots:
    void showSettings();

private:
    Ui::PluginWidget *ui;
    SettingsWidget* sw;
    Plugin plugin;
};

#endif // PLUGINWIDGET_H
