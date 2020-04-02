#define SETTINGS_FILE "plugin1/settings.txt"

#include "plugin.h"
#include "pluginwidget.h"
#include "settings.h"
#include <iostream>
#include <QList>
#include <QJsonDocument>
#include <QFile>
#include <QSettings>

Plugin::Plugin()
{
    QSettings connectionSettings("Plugins", this->name);
    if(connectionSettings.allKeys().length() != 0){
        std::cout<<"Do not create"<<std::endl;
        this->firstServerSettings.clear();
        for(auto name:connectionSettings.childGroups()){
            connectionSettings.beginGroup(name);
            QVariant value = connectionSettings.value("value");
            double min = connectionSettings.value("min").toDouble();
            double max = connectionSettings.value("max").toDouble();
            double step = connectionSettings.value("step").toDouble();
            Settings::Type type = static_cast<Settings::Type>(connectionSettings.value("type").toInt());
            this->firstServerSettings.push_back(Settings(name, value, min, max, step, type));
            connectionSettings.endGroup();
        }
    } else {
        this->firstServerSettings.push_back(Settings("IP", "10.0.0.0", 0, 0, 0, Settings::String));
        this->firstServerSettings.push_back(Settings("Port", 2000, 0, 4000, 1, Settings::Int));
        for(auto i : this->firstServerSettings){
            connectionSettings.setValue(i.name + "/value", i.value);
            connectionSettings.setValue(i.name + "/min", i.min);
            connectionSettings.setValue(i.name + "/max", i.max);
            connectionSettings.setValue(i.name + "/step", i.step);
            connectionSettings.setValue(i.name + "/type", i.type);
        }
    }


}

QList<Settings> Plugin::connectionSettings() const{
    return this->firstServerSettings;
}

void Plugin::setConnectionSettings(const QList<Settings>& settings){
    this->firstServerSettings = settings;
}

