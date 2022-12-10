#ifndef BUTTON_H
#define BUTTON_H
#include<QGraphicsRectItem>
#include<QGraphicsSceneMouseEvent>
#include<QObject>
class button: public QObject, public QGraphicsRectItem
{
    Q_OBJECT;
public:
    button(QString name,QGraphicsItem *parent = nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event);
signals:
    void clicked();
private:
    QString buttontext;
    QGraphicsTextItem* text;
};

#endif // BUTTON_H
