#include "bullet.h"
#include "player.h"
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include "game.h"
#include<QTimer>
#include "ice.h"

extern game * Game;


Bullet::Bullet(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap bullet1("C:/Users/HP/Documents/Practice/bullet.png");
    bullet1 = bullet1.scaledToHeight(30);
    bullet1 = bullet1.scaledToWidth(30);
    setPixmap(bullet1);


}





