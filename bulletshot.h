#ifndef BULLETSHOT_H
#define BULLETSHOT_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
class bulletshot : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT;
public:
    bulletshot(QGraphicsItem * parent = 0, QString Direction= " ");
    QString bullet_Direction;
    bool removed = false;
public slots:
    void move();

};

#endif // BULLETSHOT_H
