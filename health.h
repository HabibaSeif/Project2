#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>

class health: public QGraphicsTextItem
{
public:
    health(QGraphicsItem *parent = 0);
    //void increase();
    void decrease();
    int Health;
};

#endif // HEALTH_H
