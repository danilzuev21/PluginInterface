#ifndef SETTINGS_H
#define SETTINGS_H

#include <QVariant>

/*!
 * \brief Структура настройки
 * Описывает отдельную настройку одного из соединений с сервером(Порт, IP и т.д)
 */
struct Settings
{
    enum Type {Unknown, Int, String, Double};       ///<Перечисление возможных типов данных, в которых будет храниться настройка

    QString     name;                              ///< Название настройки
    QVariant    value;                             ///< Значение настройки
    double      min;                               ///< Минимальное значение настройки
    double      max;                               ///< Максимальное значение настройки
    double      step;                              ///< Шаг, с которым можно изменять настройку
    Type        type;                              ///< Тип данных настройки

    Settings(QString name, QVariant value, double min, double max, double step, Type type)
        :name(name), value(value), min(min), max(max), step(step), type(type){}
};

#endif // SETTINGS_H
