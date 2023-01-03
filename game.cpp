#include "game.h"
#include "block.h"
#include "board.h"
Game::Game()
{
    this->setSceneRect(0, 0, 640, 640);
}

void Game::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsScene::mousePressEvent(event);
    qDebug()<<"Cringe";
}
