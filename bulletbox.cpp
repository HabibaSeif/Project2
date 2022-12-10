#include "bulletbox.h"
//#include "bullet.h"
#include<QGraphicsScene>
#include<QGraphicsTextItem>
#include <QFont>
bulletbox::bulletbox(QGraphicsItem * parent): QGraphicsPixmapItem(parent)
{
//    setPlainText(QString("Bullet: "));
//    setDefaultTextColor(Qt::red);
//    setFont(QFont("times",12));
    QPixmap bulletbox("C:/Users/HP/Documents/Practice/bulletbox.png");
    bulletbox = bulletbox.scaledToHeight(90);
    bulletbox = bulletbox.scaledToWidth(320);
    setPixmap(bulletbox);


}

//void bulletbox::title()
//{
//    QPixmap bulletAge("C:/Users/HP/Documents/Practice/BulletAge.png");
//    bulletAge = bulletAge.scaledToHeight(90);
//    bulletAge = bulletAge.scaledToWidth(320);
//    setPixmap(bulletAge);
//    this->setPos(1000,490);
//}

//void bulletbox::incra(int n)
//{
//    switch(n){
//    case(1):
//       Bullet * b = new Bullet();
//       scene->addItem(b);
//    }

//}
