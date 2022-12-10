#ifndef PLAYER_H
#define PLAYER_H

#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>
#include<QQueue>
#include"bullet.h"
#include<QVector>
#include "heart.h"
#include "powersqr.h"
#include "power.h"
#include"monster.h"
class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT;
public:
    Player(int Items[23][45], QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent* event);
    int maze[23][90];
    int row;
    //bigboss::Node node;
    monster::Node node;
    int colomn;
    QString player_Direction;
    QString player_Direction2;
    int number_bullets = 0;
    int numberofbulletshot = 0;
    QQueue<Bullet *> BQ;
    QPixmap anim[4];
 QVector <QPixmap> animation[6];
    //QQueue <QPixmap> hearts[3];
QQueue<heart *> hearts;
 void showhearts();
 void removeheart();
 void reset();
 void resetall();
 int specifier = 0;
 int removehouse = 0;

   int RIGHT = 0;
    int LEFT = 1;
    int UPR = 2;
    int UPL = 3;
    int DOWNR =4;
    int DOWNL = 5;

//    int DOWN = 3;
   int anim_index = 0;
   int specifierrightup = 0;
   int specifierleftup = 0;
   int specifierrightdown = 0;
   int specifierleftdown = 0;

   QQueue<powersqr *>SQ;
   int number_power=0;
   bool power_up=false;
   powersqr *p_sqr;


public slots:
   void MySlot();
   void setTime();

};

#endif // PLAYER_H
