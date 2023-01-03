#ifndef KING_H
#define KING_H
#include "figures/figures.h"

class King : public Figures
{
    Q_OBJECT
public:
    King(int x, int y, bool isWhite);
    QVector<QPointF> getValidNeighbourPositions();

    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;

};

#endif // KING_H
