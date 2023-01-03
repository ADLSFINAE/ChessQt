#include "block.h"

Block::Block()
{
    this->setRect(0, 0, 80, 80);
    QPen pen;
    pen.setWidth(0);
    this->setPen(pen);
}

void Block::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsRectItem::mousePressEvent(event);
    qDebug()<<"Block was clicked";
    this->setBrush(Qt::red);
}



