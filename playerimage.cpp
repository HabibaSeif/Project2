#include "playerimage.h"

playerimage::playerimage(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap playerimage("C:/Users/HP/Documents/Practice/kirbyright1.png");
    playerimage = playerimage.scaledToHeight(45);
    playerimage = playerimage.scaledToWidth(45);
    setPixmap(playerimage);


}
