#ifndef GATEWAY_H
#define GATEWAY_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include <QQueue>
//#include "heart.h"
#include <QTimer>
#include <QQueue>
class gateway:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT;
public:
    gateway(int Items[23][45], QGraphicsItem * parent = 0);
    int row;
    int colomn;
    int maze[23][45];
    //QPixmap animation[4];
   void showgate();
    //void setTime();
    //QQueue<QPixmap> Gateanimation;
    //void MySlot();
};

#endif // GATEWAY_H
