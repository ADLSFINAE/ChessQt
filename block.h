#ifndef BLOCK_H
#define BLOCK_H
#include <QGraphicsRectItem>
#include <QBrush>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QObject>
#include <QPen>

class Block : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Block();
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    QBrush defaultBrush;
};

#endif // BLOCK_H
