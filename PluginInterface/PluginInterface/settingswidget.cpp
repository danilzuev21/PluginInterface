#include "settingswidget.h"
#include "ui_settingswidget.h"
#include <QLabel>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QLineEdit>

SettingsWidget::SettingsWidget(QList<Settings> settingsList, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWidget)
{
    ui->setupUi(this);
    ui->_twSettings->setRowCount(settingsList.length());
    ui->_twSettings->setColumnCount(2);
    for(int i = 0; i<settingsList.length(); i++){
        //ui->_twSettings->
        ui->_twSettings->setCellWidget(i, 0, new QLabel(settingsList.at(i).name, ui->_twSettings));
        switch(settingsList.at(i).type){
            case Settings::Int:
            {
                QSpinBox* field = new QSpinBox(ui->_twSettings);
                field->setRange(int(settingsList.at(i).min), int(settingsList.at(i).max));
                field->setSingleStep(int(settingsList.at(i).step));
                field->setValue(settingsList.at(i).value.toInt());
                ui->_twSettings->setCellWidget(i, 1, field);
                break;
            }
        case Settings::Double:
            {
                QDoubleSpinBox* field  = new QDoubleSpinBox(ui->_twSettings);
                field->setRange(settingsList.at(i).min, settingsList.at(i).max);
                field->setSingleStep(settingsList.at(i).step);
                field->setValue(settingsList.at(i).value.toDouble());
                ui->_twSettings->setCellWidget(i, 1, field);
                break;
            }
        case Settings::String:
            {
                QLineEdit* field = new QLineEdit(settingsList.at(i).value.toString(), ui->_twSettings);
                ui->_twSettings->setCellWidget(i, 1, field);
                break;
            }
            default:
                break;
        }
    }
}

SettingsWidget::~SettingsWidget()
{
    delete ui;
}
