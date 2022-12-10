#include "bulletshot.h"
#include "bullet.h"
#include "player.h"
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include "game.h"
#include<QTimer>
#include "ice.h"
#include"enemy1.h"
#include "health.h"
#include "enemy2.h"
#include"house.h"
#include"housee.h"
#include "gateway.h"
extern game * Game;

bulletshot::bulletshot(QGraphicsItem * parent, QString Dirction): QGraphicsPixmapItem(parent)
{
 //this->setPos(x() - 30, y() - 10);
  QPixmap bullet1("C:/Users/HP/Documents/Practice/bulletshot.png");
  bullet1 = bullet1.scaledToHeight(30);
  bullet1 = bullet1.scaledToWidth(30);
  setPixmap(bullet1);
  bullet_Direction=Dirction;
  if(bullet_Direction=="right")
  {
      setTransformOriginPoint(15,7.5);
      setRotation(0);
  }
  else if(bullet_Direction=="left")
  {
      setTransformOriginPoint(15,7.5);
      setRotation(180);
  }
  else if(bullet_Direction=="up")
  {
      setTransformOriginPoint(15,7.5);
      setRotation(270);
  }
  else if(bullet_Direction=="down")
  {
      setTransformOriginPoint(15,7.5);
      setRotation(90);
  }

  QTimer * timer = new QTimer();
  connect(timer, SIGNAL(timeout()),this,SLOT(move()));
  timer->start(50);


}


void bulletshot::move()
{
    //this->setPos(x() - 30, y());
    if(bullet_Direction=="right")
    {
        setPos(x()+10,y());
    }
    else if(bullet_Direction=="left")
    {
        setPos(x()-10,y());
    }
    else if(bullet_Direction=="up")
    {
        setPos(x(),y()-10);
    }
    else if(bullet_Direction=="down")
    {
        setPos(x(),y()+10);
    }

    QList<QGraphicsItem*> items = collidingItems();
    for (int i = 0; i < items.size(); i++)
    {
        if (typeid(*items[i]) == typeid(Ice))
        {
            scene()->removeItem(this);
            (Game->cc->numberofbulletshot)++;
            if(Game->cc->numberofbulletshot ==6)
            {
                removed = true;
            }
            if(Game->cc->numberofbulletshot == 6 && Game->delete1 == false && this->removed == true)
            {
                Game->stop();
            }
            else if(Game->cc->numberofbulletshot == 6 && Game->delete2 == false && this->removed == true)
            {
                Game->stop();
            }
            break;

        }
        else if(typeid(*items[i]) == typeid(house))
        {
            scene()->removeItem(this);
            (Game->cc->numberofbulletshot)++;
            if(Game->cc->numberofbulletshot ==6)
            {
                removed = true;
            }
            //(Game->cc->numberofbulletshot)++;
            if(Game->cc->numberofbulletshot == 6 && Game->delete1 == false && this->removed == true)
            {
                Game->stop();
            }
            else if(Game->cc->numberofbulletshot == 6 && Game->delete2 == false && this->removed == true)
            {
                Game->stop();
            }
            break;
        }
        else if(typeid(*items[i]) == typeid(housee))
        {
            scene()->removeItem(this);
            (Game->cc->numberofbulletshot)++;
            if(Game->cc->numberofbulletshot ==6)
            {
                removed = true;
            }
            //(Game->cc->numberofbulletshot)++;
            if(Game->cc->numberofbulletshot == 6 && Game->delete1 == false && this->removed == true)
            {
                Game->stop();
            }
            else if(Game->cc->numberofbulletshot == 6 && Game->delete2 == false && this->removed == true)
            {
                Game->stop();
            }
            break;

        }

//        if(Game->cc->numberofbulletshot == 6 && Game->e1->e1deleted == false && this->removed == true)
//        {
//            Game->stop();
//        }
//        else if(Game->cc->numberofbulletshot == 6 && Game->e2->e2deleted == false && this->removed == true)
//        {
//            Game->stop();
//        }
//        if(Game->cc->number_bullets == 6)
//        {
//            removed = true;
//        }
//        qDebug() << "N" <<numberofbulletshot;
//        numberofbulletshot++;
    }
    QList <QGraphicsItem *> colliding_item = collidingItems();
        int n = colliding_item.size();
        for(int i = 0; i < n; ++i)
        {
            if(typeid(*(colliding_item[i])) == typeid(enemy1))
            {

                Game->healthe1->decrease();
                Game->e1->removeheart();
                if(Game->e1->heartp.empty())
                {
                Game->delete1= true;
                qDebug () << "What is " <<  Game->e1->e1deleted;
                scene()->removeItem(colliding_item[i]);
                scene()->removeItem(this);
                delete colliding_item[i];
                Game->e1->e1deleted = true;
                Game->e1->e11deleted++;
//                    numberofbulletshot++;
//                    qDebug() << numberofbulletshot;
                delete this;
                if(Game->delete1 == true && Game->delete2 == true)
                {
                    qDebug() << "I am here";
                    Game->Gate->showgate();
                }
                (Game->cc->numberofbulletshot)++;
                if(Game->cc->numberofbulletshot == 6)
                {

                    removed = true;
                }
                if(Game->cc->numberofbulletshot == 6 && Game->delete1 == false && this->removed == true)
                {

                    Game->stop();
                }
                else if(Game->cc->numberofbulletshot == 6 && Game->delete2== false && this->removed == true)
                {

                    Game->stop();
                }

                return;
                }

                scene()->removeItem(this);
                (Game->cc->numberofbulletshot)++;
                if(Game->cc->numberofbulletshot == 6)
                {
                    removed = true;
                }
                if(Game->cc->numberofbulletshot == 6 && Game->delete1 == false && this->removed == true)
                {
                    Game->stop();
                }
                else if(Game->cc->numberofbulletshot == 6 && Game->delete2 == false && this->removed == true)
                {
                    Game->stop();
                }
//                    numberofbulletshot++;
//                    qDebug() << numberofbulletshot;
                return;
            }
            }

        QList <QGraphicsItem *> colliding_ite = collidingItems();
            int i = colliding_item.size();
            for(int i = 0; i < n; ++i)
            {
                if(typeid(*(colliding_ite[i])) == typeid(enemy2))
                {
                    Game->healthe2->decrease();
                    Game->e2->removeheart();
                    if(Game->e2->heartp.empty())
                    {
                    Game->delete2 =true;
                    Game->e2->e2deleted = true;
                    scene()->removeItem(colliding_ite[i]);
                    scene()->removeItem(this);
                    delete colliding_ite[i];
//                    numberofbulletshot++;
//                    qDebug() << numberofbulletshot;
                    delete this;
                    if(Game->delete1 && Game->delete2)
                    {
                        qDebug() << "I am here 2";
                        Game->Gate->showgate();
                    }
                    (Game->cc->numberofbulletshot)++;
                    if(Game->cc->numberofbulletshot == 6)
                    {
                        removed = true;
                    }
                    if(Game->cc->numberofbulletshot == 6 && Game->delete1 == false && this->removed == true)
                    {
                        Game->stop();
                    }
                    else if(Game->cc->numberofbulletshot == 6 && Game->delete2 == false && this->removed == true)
                    {
                        Game->stop();
                    }

                    return;
                    }

                    scene()->removeItem(this);
                    (Game->cc->numberofbulletshot)++;
                    if(Game->cc->numberofbulletshot == 6)
                    {
                        removed = true;
                    }
                    if(Game->cc->numberofbulletshot == 6 && Game->delete1== false && this->removed == true)
                    {
                        Game->stop();
                    }
                    else if(Game->cc->numberofbulletshot == 6 && Game->delete2 == false && this->removed == true)
                    {
                        Game->stop();
                    }
//                    numberofbulletshot++;
//                    qDebug() << numberofbulletshot;
                    return;
                }
            }

}

