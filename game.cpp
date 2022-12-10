#include "game.h"
#include"ice.h"
#include<QGraphicsScene>
#include<QFile>
#include<QDebug>
#include"player.h"
#include"bullet.h"
#include "bulletbox.h"
#include"bulletage.h"
#include<QGraphicsPixmapItem>
#include "bricks.h"
#include "enemy2image.h"
#include"enemyimage.h"
#include "playerimage.h"
#include <QWidget>
#include <QGraphicsRectItem>
#include "house.h"
#include "housee.h"
#include "button.h"
#include<QTimer>
game::game(QWidget * parent)
{
   scene = new QGraphicsScene(); //
   QImage Background("C:/Users/HP/Documents/Practice/background.jpg");
   //view = new QGraphicsView(scene);
   setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setFixedSize(1300,800);
   scene->setSceneRect(0,0,1300,800);
   setBackgroundBrush(QBrush(Background));
   setScene(scene);
}

void game::stop()
{
    //scene->clear();
    //scene->removeItem(bb);
    qDebug() << "I am in game the 7aga is" << this->e1->e1deleted;

    if(this->delete1 == false)
    {
    this->e1->timer->stop();
    e1->setEnabled(false);
    }
    if(this->delete2 == false)
    {
    this->e2->timer->stop();
    e2->setEnabled(false);
    }
    cc->setEnabled(false);

    this->DisplayDeath();


}

void game::start()
{
    qDebug() << "HEREEEE";
   scene->clear();
   int boardData[23][45];
   QGraphicsPixmapItem* dataimage[23][45];
   QString temp;
//   e1->e11deleted = 0;
//   e2->e2deleted = false;
   if(currentlevel == 0)
   {
    QFile file("C:/Users/HP/Desktop/CCS2/map.txt");
    file.open(QIODevice::ReadOnly);
       QTextStream stream(&file);
//       int boardData[23][45];
//       QGraphicsPixmapItem* dataimage[23][45];
       //QString temp;
       for (int i = 0; i < 23; i++)
       {
           for (int j = 0; j < 45; j++)
           {
               stream >> temp;
               boardData[i][j] = temp.toInt();
               qDebug() << i << " " << j << boardData[i][j];
           }


       }



           for(int i = 0; i < 23; i++)
           {
               for(int j = 0; j < 45; j++)
               {
                   if(boardData[i][j] ==-1)
                   {

                       dataimage[i][j] = new Ice();
                       scene->addItem(dataimage[i][j]);
                       dataimage[i][j]->setPos((j * 30) , (i * 30));
                   }
                   if(boardData[i][j] % 2 == 0 && boardData[i][j] == 4)
                   {
                       dataimage[i][j] = new Bricks();
                       scene->addItem(dataimage[i][j]);
                       dataimage[i][j]->setPos((j * 30) , (i * 30));
                   }
                   if(boardData[i][j] % 2 ==0 && boardData[i][j] == -2)
                   {
                       dataimage[i][j] = new Bricks();
                       scene->addItem(dataimage[i][j]);
                       dataimage[i][j]->setPos((j * 30) , (i * 30));
                       dataimage[i][j] = new house();
                       scene->addItem(dataimage[i][j]);
                       dataimage[i][j]->setPos((j * 30) , (i * 30));
               }
                   if(boardData[i][j] % 2 ==0 && boardData[i][j] == -8)
                   {
                       dataimage[i][j] = new Bricks();
                       scene->addItem(dataimage[i][j]);
                       dataimage[i][j]->setPos((j * 30) , (i * 30));
                       dataimage[i][j] = new housee();
                       scene->addItem(dataimage[i][j]);
                       dataimage[i][j]->setPos((j * 30) , (i * 30));
               }

               }
           }
   }
   else if(currentlevel == 1)
   {
       QFile file("C:/Users/HP/Desktop/CCS2/maze22.txt");
       file.open(QIODevice::ReadOnly);
          QTextStream stream(&file);
   //       int boardData[23][45];
   //       QGraphicsPixmapItem* dataimage[23][45];
          //QString temp;
          for (int i = 0; i < 23; i++)
          {
              for (int j = 0; j < 45; j++)
              {
                  stream >> temp;
                  boardData[i][j] = temp.toInt();
                  qDebug() << i << " " << j << boardData[i][j];
              }


          }



              for(int i = 0; i < 23; i++)
              {
                  for(int j = 0; j < 45; j++)
                  {
                      if(boardData[i][j] ==-1)
                      {

                          dataimage[i][j] = new Ice();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                      }
                      if(boardData[i][j] % 2 == 0 && boardData[i][j] == 4)
                      {
                          dataimage[i][j] = new Bricks();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                      }
                      if(boardData[i][j] % 2 ==0 && boardData[i][j] == -2)
                      {
                          dataimage[i][j] = new Bricks();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                          dataimage[i][j] = new house();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                  }
                      if(boardData[i][j] % 2 ==0 && boardData[i][j] == -8)
                      {
                          dataimage[i][j] = new Bricks();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                          dataimage[i][j] = new housee();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                  }

                  }
              }
   }
   else if(currentlevel == 2)
   {
       QFile file("C:/Users/HP/Desktop/CCS2/maze3.txt");
       file.open(QIODevice::ReadOnly);
          QTextStream stream(&file);
   //       int boardData[23][45];
   //       QGraphicsPixmapItem* dataimage[23][45];
          //QString temp;
          for (int i = 0; i < 23; i++)
          {
              for (int j = 0; j < 45; j++)
              {
                  stream >> temp;
                  boardData[i][j] = temp.toInt();
                  qDebug() << i << " " << j << boardData[i][j];
              }


          }



              for(int i = 0; i < 23; i++)
              {
                  for(int j = 0; j < 45; j++)
                  {
                      if(boardData[i][j] ==-1)
                      {

                          dataimage[i][j] = new Ice();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                      }
                      if(boardData[i][j] % 2 == 0 && boardData[i][j] == 4)
                      {
                          dataimage[i][j] = new Bricks();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                      }
                      if(boardData[i][j] % 2 ==0 && boardData[i][j] == -2)
                      {
                          dataimage[i][j] = new Bricks();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                          dataimage[i][j] = new house();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                  }
                      if(boardData[i][j] % 2 ==0 && boardData[i][j] == -8)
                      {
                          dataimage[i][j] = new Bricks();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                          dataimage[i][j] = new housee();
                          scene->addItem(dataimage[i][j]);
                          dataimage[i][j]->setPos((j * 30) , (i * 30));
                  }

                  }
              }
   }



           //scene->clear();
           cc = new Player(boardData);
           cc->resetall();
           //cc->resetall();
           cc->setFlag(QGraphicsItem::ItemIsFocusable);
           cc->setFocus();
           scene->addItem(cc);

           Gate = new gateway(boardData);
//           m1=new housemario();
//           m1->setPos(740,270);
//           scene->addItem(m1);
           H = new monster(boardData);
//           scene->addItem(H);
          m = new bigboss(boardData,cc);
          std::pair<int, int> src(cc->row, cc->colomn);
          std::pair<int, int> dst(m->row, m->colomn);
          //m->aStar(boardData, src, dst);
          scene->addItem(m);
           b_box=new bulletbox();
           b_box->setPos(950,490);
           scene->addItem(b_box);

           ba = new bulletAge();
           ba->setPos(1030,610);
           ba->setScale(0.5);
           scene->addItem(ba);

           healthboxplayer = new bulletbox();
           healthboxplayer->setPos(50, 490);
           scene->addItem(healthboxplayer);

           powerbox = new bulletbox();
           powerbox->setPos(650,490);
           scene->addItem(powerbox);

           pw = new powersymbol();
           pw->setPos(680,610);
           scene->addItem(pw);

           healthh= new bulletbox();
           healthh->setPos(350,490);
           scene->addItem(healthh);

           cc->showhearts();
           Bullet * bb = new Bullet();
           scene->addItem(bb);
           bb->setPos(30,90);

           bb1 = new Bullet();
           scene->addItem(bb1);
           bb1->setPos(1230,30);

           bb2 = new Bullet();
           scene->addItem(bb2);
           bb2->setPos(810,360);

           bb3 = new Bullet();
           scene->addItem(bb3);
           bb3->setPos(390,360);

           bb4 = new Bullet();
           scene->addItem(bb4);
           bb4->setPos(420,150);

           bb5 = new Bullet();
           scene->addItem(bb5);
           bb5->setPos(1110,540);

           e1 = new enemy1(boardData);
           e1->e11deleted = 0;
           e1->e1deleted = false;
           this->delete1 = false;
           scene->addItem(e1);
           e1->showhearts();

           e2 = new enemy2(boardData);
           e2->e2deleted = false;
           this->delete2 = false;
           scene->addItem(e2);
           e2->showhearts();


           eimage = new enemyimage();
           eimage->setPos(120, 610);
           scene->addItem(eimage);


           e2image = new enemy2image();
           e2image->setPos(120, 645);
           scene->addItem(e2image);

           play = new playerimage();
           play->setPos(400,610);
           scene->addItem(play);


           p1 = new power();
           p1->setPos(150,500);
           scene->addItem(p1);

           p2 = new power();
           p2->setPos(490,40);
           scene->addItem(p2);
           //scene->clear();
           show();
}

void game::DisplayDeath()
{

    QGraphicsRectItem *deathpanel = new QGraphicsRectItem(0,0,500,500);
    deathpanel->setPos(400, 100);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    deathpanel->setBrush(brush);
    deathpanel->setOpacity(0.5);
    scene->addItem(deathpanel);

    QPixmap gameOver("C:/Users/HP/Desktop/CCS2/gameover.png");
    gameOver= gameOver.scaledToHeight(400);
    gameOver = gameOver.scaledToWidth(400);
    QGraphicsPixmapItem * gameeO = new QGraphicsPixmapItem(gameOver);
    gameeO->setPos(450, 100);
    scene->addItem(gameeO);

    button * PlayAgain = new button(QString("Play Again"));
    PlayAgain->setPos(420, 390);
    connect(PlayAgain, SIGNAL(clicked()),this,SLOT(start()));
    scene->addItem(PlayAgain);

    button * Quit = new button(QString("Quit"));
    Quit->setPos(670, 390);
    //connect(Quit, SIGNAL(clicked()), this, SLOT(close()));
    connect(Quit, SIGNAL(clicked()), this, SLOT(close()));
    scene->addItem(Quit);
}

void game::win()
{
    cc->setEnabled(false);
    QGraphicsRectItem *deathpanel = new QGraphicsRectItem(0,0,500,500);
    deathpanel->setPos(400, 100);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    deathpanel->setBrush(brush);
    deathpanel->setOpacity(0.5);
    scene->addItem(deathpanel);

    QPixmap gameOver("C:/Users/HP/Desktop/CCS2/youwin.png");
    gameOver= gameOver.scaledToHeight(400);
    gameOver = gameOver.scaledToWidth(400);
    QGraphicsPixmapItem * gameeO = new QGraphicsPixmapItem(gameOver);
    gameeO->setPos(450, 100);
    scene->addItem(gameeO);

    this->currentlevel++;
    button * NextL = new button(QString("Next level ?"));
    NextL->setPos(420, 390);
    connect(NextL, SIGNAL(clicked()),this,SLOT(start()));
    scene->addItem(NextL);


}

void game::displayMainMenu()
{
    //scene->clear();
//    QGraphicsTextItem * text = new QGraphicsTextItem(QString("Title"));
//    scene->addItem(text);
    //qDebug() << "I am displayed";
    QPixmap gamepicture("C:/Users/HP/Desktop/CCS2/gamephoto.jpg");
    gamepicture = gamepicture.scaledToHeight(500);
    gamepicture = gamepicture.scaledToWidth(500);
    QGraphicsPixmapItem * gp = new QGraphicsPixmapItem(gamepicture);
    gp->setPos(400, 100);
    scene->addItem(gp);

    QPixmap gamename("C:/Users/HP/Desktop/CCS2/gamename.png");
    gamename = gamename.scaledToHeight(500);
    gamename = gamename.scaledToWidth(500);
    QGraphicsPixmapItem * gp2 = new QGraphicsPixmapItem(gamename);
    gp2->setPos(400, 50);
    scene->addItem(gp2);

    button * play = new button(QString("Play"));
    //int bxPos = this->width()/2 - play->boundingRect().width()/2;

    int bxPos = 420;
    int byPos = 500;
    play->setPos(bxPos, byPos);
    //connect(play, SIGNAL(play->clicked()), this, SLOT(start()));
    connect(play, SIGNAL(clicked()), this, SLOT(start()));
    scene->addItem(play);

    button * quit = new button(QString("Quit"));
    int qxPos = 670;
    int qyPos = 500;
    quit->setPos(qxPos, qyPos);
    connect(quit, SIGNAL(clicked()), this, SLOT(close()));
    scene->addItem(quit);
    //view->show();
}

//void game::endgame()
//{
//    DisplayDeath();
//}
