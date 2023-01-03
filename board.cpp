#include "board.h"
#include "game.h"
extern Game* game;

Board::Board()
{
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((i + j) % 2 == 0){
                blockArray[i][j] = new Block();
                game->addItem(blockArray[i][j]);
                blockArray[i][j]->setPos(i * 80, j * 80);
                blockArray[i][j]->setBrush(Qt::gray);
                blockArray[i][j]->defaultBrush = (Qt::gray);
            }
            else{
                blockArray[i][j] = new Block();
                game->addItem(blockArray[i][j]);
                blockArray[i][j]->setPos(i * 80, j * 80);
                blockArray[i][j]->setBrush(Qt::black);
                blockArray[i][j]->defaultBrush = (Qt::black);
            }
        }
    }

}
