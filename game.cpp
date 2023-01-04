#include "game.h"
#include "block.h"
#include "board.h"

Game::Game()
{
    this->setSceneRect(0, 0, 640, 640);
}

void Game::defaultFiguresPosition()
{
    whiteKing = new King(5, 7, true);
    this->addItem(whiteKing);
    figuresAll.push_back(whiteKing);

    blackKing = new King(4, 7, false);
    this->addItem(blackKing);
    figuresAll.push_back(blackKing);

    for(int i = 0; i < 8; i++){
        whitePawn[i] = new Pawn(i, 1, true);
        this->addItem(whitePawn[i]);
        figuresAll.push_back(whitePawn[i]);

        blackPawn[i] = new Pawn(i, 6, false);
        this->addItem(blackPawn[i]);
        figuresAll.push_back(blackPawn[i]);
    }
}

void Game::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsScene::mousePressEvent(event);
    qDebug()<<"Cringe";
}
