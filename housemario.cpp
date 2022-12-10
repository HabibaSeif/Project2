#include "housemario.h"

housemario::housemario (QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap bricks("C:/Users/HP/Desktop/CCS2/housemario.png");
    bricks= bricks.scaledToHeight(60);
    bricks = bricks.scaledToWidth(60);
    setPixmap(bricks);
}



