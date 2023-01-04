#ifndef GAME_H
#define GAME_H
#include "figures/king.h"
#include "figures/pawn.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QVector>

class Game : public QGraphicsScene
{
public:
    Game();
    void defaultFiguresPosition();
    void mousePressEvent(QGraphicsSceneMouseEvent* event);

    QVector<Figures*> figuresAll;
    int schlac = 10;
private:
    King* whiteKing{nullptr};
    King* blackKing{nullptr};
    Pawn* whitePawn[8];
    Pawn* blackPawn[8];
};

#endif // GAME_H
