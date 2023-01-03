#ifndef BOARD_H
#define BOARD_H
#include "block.h"
#include <vector>
class Board
{
public:
    Board();
    Block* blockArray[8][8];

};

#endif // BOARD_H
