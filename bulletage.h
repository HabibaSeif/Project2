#ifndef BULLETAGE_H
#define BULLETAGE_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
//#include "bullet.h"
class bulletAge:public QObject,public QGraphicsPixmapItem
{
   Q_OBJECT;
public:
    bulletAge(QGraphicsItem * parent = 0);
    //void title();
    //Bullet * b = new Bullet[6];
    //void decrease(int number);
    //void increase(int number);
    //int amountofbullets= 0;
};

#endif // BULLETAGE_H
