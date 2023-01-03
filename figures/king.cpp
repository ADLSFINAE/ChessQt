#include "king.h"
#include "board.h"
extern Board* board;
King::King(int x, int y, bool isWhite) : Figures(x, y, isWhite)
{
    if(isWhite)
        this->setPixmap(QPixmap(":/chesscom/wK.png"));
    else
        this->setPixmap(QPixmap(":/chesscom/bK.png"));
}

QVector<QPointF> King::getValidNeighbourPositions()
{
    //Возвращает вектор из возможных позиций
    QVector<QPointF> positions;

    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            QPointF neighbourPosition = (this->pos() / 80) + QPointF(i, j);
            qDebug()<<neighbourPosition<<"neighbourPosition";
            bool isOutsideSceneByX = neighbourPosition.x() < 0 || neighbourPosition.x() >= 8;
            bool isOutsideSceneByY = neighbourPosition.y() < 0 || neighbourPosition.y() >= 8;

            // Позиция вне сцены
            if (isOutsideSceneByX || isOutsideSceneByY) {
                continue;
            }

            // Позиция равна точке объекта
            if (neighbourPosition == this->pos() / 80) {
                continue;
            }

            positions.push_back(neighbourPosition);
        }
    }

    return positions;
}

void King::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QVector<QPointF> positions = this->getValidNeighbourPositions();
        for (const auto& point : positions) {
            int x = point.x();
            int y = point.y();
            board->blockArray[x][y]->setBrush(Qt::red);
        }
}

void King::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QVector<QPointF> positions = this->getValidNeighbourPositions();
        for (const auto& point : positions) {
            int x = point.x();
            int y = point.y();
            board->blockArray[x][y]->setBrush(board->blockArray[x][y]->defaultBrush);
        }
}

