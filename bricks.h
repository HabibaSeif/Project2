#ifndef BRICKS_H
#define BRICKS_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Bricks: public QObject, public QGraphicsPixmapItem
{
     Q_OBJECT;
public:
    Bricks(QGraphicsItem * parent =0);
};

#endif // BRICKS_H
