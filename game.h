#ifndef GAME_H
#define GAME_H
#include<QGraphicsView>
#include <QObject>
#include<QGraphicsScene>
#include "player.h"
#include "enemy1.h"
#include "health.h"
#include"bulletbox.h"
#include "enemy2.h"
#include "power.h"
#include "powersymbol.h"
#include "gateway.h"
#include "housemario.h"
#include "bulletage.h"
#include"enemyimage.h"
#include"enemy2image.h"
#include "playerimage.h"
#include "bigboss.h"
#include "monster.h"
#include "enemy12.h"
//#include "powersqr.h"
class game: public QGraphicsView
{
        Q_OBJECT;
public:
    game(QWidget * parent = 0);
    QGraphicsScene * scene;
    //QGraphicsView * view;
    Player* cc;
    enemy1 * e1;
    health * healthe1 = new health();
    bulletbox * healthboxplayer = new bulletbox();
    bulletbox* healthh;
    bulletbox* powerbox;
    enemy2* e2;

    health * healthe2 = new health();
    health * healthplayerr = new health();
    power *p1;
    power *p2;
    powersymbol *pw;
    gateway * Gate;
    housemario *m1;
    bulletbox *b_box;
    bulletAge * ba;
    Bullet * bb;
    Bullet * bb1;
    Bullet * bb2;
    Bullet * bb3;
    Bullet * bb4;
    Bullet * bb5;
    bigboss * m;
    monster * H;
    enemyimage *eimage;
    enemy2image * e2image;
    playerimage* play;
    bool delete1 = false;
    bool delete2 = false;

    //void displayMainMenu();
    int currentlevel = 0;
    void stop();
    void win();
//    void endgame();
    void DisplayDeath();
public slots:
    void start();
    void displayMainMenu();
};

#endif // GAME_H
