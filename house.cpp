#include "house.h"

house::house(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap h("C:/Users/HP/Documents/Practice/tree.png");
    h = h.scaledToHeight(30);
    h = h.scaledToWidth(30);
    setPixmap(h);


}
