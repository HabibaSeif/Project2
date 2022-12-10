#include "powersymbol.h"

powersymbol::powersymbol(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
    QPixmap pw("C:/Users/HP/Documents/Practice/powersymbol.png");
    pw = pw.scaledToHeight(30);
    pw = pw.scaledToWidth(38);
    setPixmap(pw);
}
