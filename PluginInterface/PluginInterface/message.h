#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QList>
#include <QDateTime>

/*!
 * \brief Определениие структуры сообщения
 *
 */
struct Message
{
    enum MessagePriority {Unknown, Low, Medium, High}; ///<Приоритеты сообщения

    quint32         id;                                 ///<Уникальный идентификатор сообщения
    QString         reciever;                           ///<Получатель сообщения
    QString         sender;                             ///<Отправитель сообщения
    QString         status;                     ///<Статус сообщения(просмотрено, получено, отправлено и т.д.)
    QDateTime       timeMsg;                    ///<Время отправки/получения сообщения
    MessagePriority priority;                   ///<Приоритет сообщения
    QString         type;                       ///<Тип сообщения
    QString         caption;                    ///<Заголовок сообщения
    QString         data;                               ///<Сообщение
    QString         desrtiption;                        ///<Текст сообщения
    QList<Message>  responseStatus;              ///<Список возможных ответов на сообщение(может быть пустым)
    Message();
};

#endif // MESSAGE_H
