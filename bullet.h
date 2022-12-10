#ifndef BULLET_H
#define BULLET_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
class Bullet: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT;
public:
    Bullet(QGraphicsItem * parent = 0);
    //int number_bullets = 0;
    //QString bullet_Direction;

public slots:
    //void move();
    //void playergain();
};

#endif // BULLET_H
