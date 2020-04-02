#include "pluginwidget.h"
#include "ui_pluginwidget.h"
#include <iostream>

PluginWidget::PluginWidget(Plugin plugin, QWidget *parent) :
    QWidget(parent), plugin(plugin),
    ui(new Ui::PluginWidget)
{
    ui->setupUi(this);
    sw = new SettingsWidget(plugin.connectionSettings(), this);
    std::cout<<"Plugin widget loaded"<<std::endl;
}

PluginWidget::~PluginWidget()
{
    delete ui;
}

void PluginWidget::showSettings(){
    std::cout<<"showSettings"<<std::endl;
    sw->show();
}
