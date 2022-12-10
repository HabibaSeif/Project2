#include "bulletage.h"
#include<QGraphicsScene>
#include<QGraphicsTextItem>
#include <QFont>
bulletAge::bulletAge(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap bulletbox("C:/Users/HP/Documents/Practice/bulletAge.png");
    bulletbox = bulletbox.scaledToHeight(90);
    bulletbox = bulletbox.scaledToWidth(320);
    setPixmap(bulletbox);
}
