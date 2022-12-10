#ifndef PLAYERIMAGE_H
#define PLAYERIMAGE_H
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class playerimage:public QObject,public QGraphicsPixmapItem
{
   Q_OBJECT;
public:
    playerimage(QGraphicsItem * parent = 0);
};

#endif // PLAYERIMAGE_H
