#include "gateway.h"
#include "game.h"

extern game*Game;
gateway::gateway(int Items[23][45], QGraphicsItem * parent):QGraphicsPixmapItem(parent)
{
    row = 3;
    colomn = 29;
    for(int i = 0; i < 23; i++)
    {
        for(int j = 0; j < 45; j++)
        {
            maze[i][j] = Items[i][j];
        }
    }


    /*Gateanimation.enqueue(QPixmap("C:/Users/HP/Desktop/CCS2/gate4.png"));
    Gateanimation.enqueue(QPixmap("C:/Users/HP/Desktop/CCS2/gate2.png"));
    Gateanimation.enqueue(QPixmap("C:/Users/HP/Desktop/CCS2/gate3.png"));
    Gateanimation.enqueue(QPixmap("C:/Users/HP/Desktop/CCS2/gate4.png"))*/

//    for(int i = 0; i < 4; i++)
//    {
//        Gateanimation[i] = Gateanimation[i].scaledToHeight(35);
//        Gateanimation[i] = Gateanimation[i].scaledToWidth(35);
//    }
    QPixmap gate("C:/Users/HP/Desktop/CCS2/gate4.png");
    gate =gate.scaledToHeight(35);
    gate =gate.scaledToWidth(35);
    setPixmap(gate);
    setPos(400,400);
}


//void gateway::setTime()
//{
//    QTimer * timer = new QTimer();
//    connect(timer,SIGNAL(timeout()), this, SLOT(MySlot()));
//    timer->start(2000);
//}

//void gateway::MySlot()
//{
//    if(Game->e1->e1deleted == true && Game->e2->e2deleted)
//    {
//        Gateanimation.dequeue();
//    }
//}

void gateway::showgate()
{
   Game->scene->addItem(Game->Gate);
//   for(int i = 1; i <= 3; i++)
//   {
//       Game->Gate->setPixmap(Gateanimation[i]);
//       Game->scene->addItem(Game->Gate);
//       setTime();
//   }
}
