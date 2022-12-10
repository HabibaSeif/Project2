#include "housee.h"
#include "game.h"

extern game * Game;
housee::housee(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
               {
    if (Game->currentlevel == 0)
    {
                   QPixmap h("C:/Users/HP/Documents/Practice/house.png");
                   h = h.scaledToHeight(30);
                   h = h.scaledToWidth(30);
                   setPixmap(h);
    }
    else if(Game->currentlevel == 2)
    {
        QPixmap h("C:/Users/HP/Desktop/CCS2/house33.png");
        h = h.scaledToHeight(30);
        h = h.scaledToWidth(30);
        setPixmap(h);
    }

               }

