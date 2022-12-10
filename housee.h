#ifndef HOUSEE_H
#define HOUSEE_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>


class housee: public QObject, public QGraphicsPixmapItem
{
      Q_OBJECT;
public:
    housee(QGraphicsItem * parent = 0);
};

#endif // HOUSEE_H
