#ifndef BULLETBOX_H
#define BULLETBOX_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
//#include "bullet.h"
class bulletbox:public QObject,public QGraphicsPixmapItem
{
   Q_OBJECT;
public:
    bulletbox(QGraphicsItem * parent = 0);
    //void title();
    //Bullet * b = new Bullet[6];
    //void decrease(int number);
    //void increase(int number);
    //int amountofbullets= 0;
};

#endif // BULLETBOX_H
