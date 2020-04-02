#include "mainwindow.h"
#include "pluginwidget.h"
#include "plugin.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    Plugin plugin1;
    PluginWidget *pw = new PluginWidget(plugin1, this);
    //QHBoxLayout *hLayout = new QHBoxLayout;
    //QPushButton* settingsButton = new QPushButton("Настройки");
    //hLayout->addWidget(settingsButton);
    //pw->setLayout(hLayout);
    //pw->show();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
