#include "game.h"
#include "customview.h"
#include <QApplication>
#include "board.h"
Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new Game;
    Board* board = new Board;
    CustomView* view = new CustomView(game);
    view->show();
    return a.exec();
}
