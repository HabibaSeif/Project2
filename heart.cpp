#include "heart.h"

heart::heart(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap heart("C:/Users/HP/Documents/Practice/heartp.png");
    heart = heart.scaledToHeight(50);
    heart = heart.scaledToWidth(50);
    setPixmap(heart);


}
