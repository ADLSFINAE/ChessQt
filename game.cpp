#include "game.h"
#include "block.h"
#include "board.h"

Game::Game()
{
    this->setSceneRect(0, 0, 640, 640);
}

void Game::defaultFiguresPosition()
{
    whiteKing = new King(4, 0, true);
    this->addItem(whiteKing);

    blackKing = new King(4, 7, false);
    this->addItem(blackKing);

    for(int i = 0; i < 8; i++){
        whitePawn[i] = new Pawn(i, 1, true);
        this->addItem(whitePawn[i]);

        blackPawn[i] = new Pawn(i, 6, false);
        this->addItem(blackPawn[i]);
    }
}

void Game::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsScene::mousePressEvent(event);
    qDebug()<<"Cringe";
}
