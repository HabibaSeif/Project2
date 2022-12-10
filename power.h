#ifndef POWER_H
#define POWER_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class power: public QObject, public QGraphicsPixmapItem
{ Q_OBJECT
public:
    power(QGraphicsItem * parent = 0);
};

#endif // POWER_H
