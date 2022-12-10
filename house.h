#ifndef HOUSE_H
#define HOUSE_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class house: public QObject, public QGraphicsPixmapItem
{
      Q_OBJECT;
public:
    house(QGraphicsItem * parent = 0);
};

#endif // HOUSE_H
