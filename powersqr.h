#ifndef POWERSQR_H
#define POWERSQR_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class powersqr: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    powersqr(QGraphicsItem *parent=0);
};

#endif // POWERSQR_H
