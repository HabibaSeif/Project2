#ifndef ICE_H
#define ICE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
class Ice: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT;
public:
    Ice(QGraphicsItem * parent =0);
};

#endif // ICE_H
