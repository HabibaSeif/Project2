#include "ice.h"
#include "game.h"

extern game * Game;
Ice::Ice(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    if(Game->currentlevel == 0)
    {
    QPixmap ice("C:/Users/HP/Documents/Practice/ice.png");
    ice = ice.scaledToHeight(30);
    ice = ice.scaledToWidth(30);
    setPixmap(ice);
    }
    else if(Game->currentlevel == 1)
    {
        QPixmap ice("C:/Users/HP/Desktop/CCS2/ice2.png");
        ice = ice.scaledToHeight(30);
        ice = ice.scaledToWidth(30);
        setPixmap(ice);
    }
    else
    {
        QPixmap ice("C:/Users/HP/Desktop/CCS2/ice4.png");
        ice= ice.scaledToHeight(30);
        ice = ice.scaledToWidth(30);
        setPixmap(ice);
    }
}
