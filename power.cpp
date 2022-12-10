#include "power.h"
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

power::power(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap power1("C:/Users/HP/Documents/Practice/power.png");
    power1 = power1.scaledToHeight(35);
    power1 = power1.scaledToWidth(35);
    setPixmap(power1);
}
