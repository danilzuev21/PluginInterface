#include "mainwindow.h"
#include "pluginwidget.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    Plugin plugin1;
    PluginWidget *pw = new PluginWidget(plugin1);
    pw->show();

    return a.exec();
}
