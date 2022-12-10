#ifndef HOUSEMARIO_H
#define HOUSEMARIO_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class housemario: public QObject, public QGraphicsPixmapItem
{
     Q_OBJECT;
public:
     housemario(QGraphicsItem * parent =0);
};

#endif // HOUSEMARIO_H
