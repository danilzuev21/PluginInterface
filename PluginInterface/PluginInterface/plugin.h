#ifndef PLUGIN_H
#define PLUGIN_H

#include <QList>
#include <QIcon>
#include <QString>
#include <QSettings>

#include "settings.h"
#include "message.h"

/*!
 * \brief Класс описывающий отдельный плагин
 * Плагин будет подгружаться из папки и встраиваться в снова создающийся обьект класса.
 */
class Plugin
{
private:
    ///Возможные статусы соединения
    enum ConnectionStatus {Unknown, CONNECTED, WAITING, DISCONECTED};

    QString name;
    QList<Settings> firstServerSettings;                                ///<Настройки соединения с первым сервисом
    QList<Settings> secondServerSettings;                               ///<Настройи соединения со вторым сервисом
    QList<Message> messages;                                            ///<Сообщения обработанные плагином

public:
    /*!
     * \brief Конструктор объекта класса Plugin
     * Загружает настройки из файла, если он есть, создает настройки со значениями по умолчанию.
     */
    Plugin();

    QString getName() const;                                                     ///<Название плагина
    QString caption() const; ///<Заголовок плагина
    QString firstServerName() const;                                          ///<Название первого сервера
    QString secondServerName() const;                                     ///<Название второго сервера
    QIcon icon() const;                                                       ///<Иконка плагина
    QString version() const;                                              ///<Версия плагина
    void connect();                                          ///<Функция, выполняющая соединение с серверами
    void disconnect();///<Функция, выполняющая разрыв соединения с серверами
    void send(Message message);///<Функция, выполняющая отправку сообщения
    QList<Settings> connectionSettings() const;///<Функция, возвращающая текущие настройки соединения
    void setConnectionSettings(const QList<Settings> &sList);///<Функция, устанавливающая новые настройки соединения
    QList<Message> messageList() const;///<Функция, возвращающая список сообщений, обработанных плагином
    QSettings readSettings();///<Функция выполняющая чтение настроек из файла
    void writeSettings();///<Функция, выполняющая запись настроек в файл

signals:
    void firstServerMessageCountChanged(quint32 recieved, quint32 sended);///<Сигнал, сообщающий об изменении счетчика сообщений на первом сервере
    void secondServerMessageCountChanged(quint32 recieved, quint32 sended);///<Сигнал, сообщающий об изменении счетчика сообщений на втором сервере
    void firstServerConnectionStatus(ConnectionStatus s);///<Сигнал, сообщающий об изменении статуса соединения на первом сервере
    void secondServerConnectionStatus(ConnectionStatus s);///<Сигнал, сообщающий об изменении статуса соединения на первом сервере
    void recieved(Message message);///<Функция, выполняющая получение сообщения
};

#endif // PLUGIN_H
