#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

class Game : public QGraphicsScene
{
public:
    Game();
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
};

#endif // GAME_H
