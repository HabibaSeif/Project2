#include "bricks.h"
#include "game.h"

extern game * Game;
Bricks::Bricks(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    if (Game->currentlevel == 0)
    {
    QPixmap bricks("C:/Users/HP/Documents/Practice/brick22.png");
    bricks= bricks.scaledToHeight(30);
    bricks = bricks.scaledToWidth(30);
    setPixmap(bricks);
    }
    else if(Game->currentlevel == 1)
    {
        QPixmap bricks("C:/Users/HP/Desktop/CCS2/bricks4.png");
        bricks= bricks.scaledToHeight(30);
        bricks = bricks.scaledToWidth(30);
        setPixmap(bricks);
    }
    else
    {
        QPixmap bricks("C:/Users/HP/Desktop/CCS2/bricks5.png");
        bricks= bricks.scaledToHeight(30);
        bricks = bricks.scaledToWidth(30);
        setPixmap(bricks);
    }


}
