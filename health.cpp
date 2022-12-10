#include "health.h"

health::health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    Health = 3;
}

void health::decrease()
{
    Health--;
}
