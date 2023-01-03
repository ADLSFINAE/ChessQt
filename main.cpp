#include "game.h"
#include "customview.h"
#include <QApplication>
#include "board.h"
Game* game;
Board* board;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new Game;
    board = new Board;
    game->defaultFiguresPosition();
    CustomView* view = new CustomView(game);
    view->show();
    return a.exec();
}
