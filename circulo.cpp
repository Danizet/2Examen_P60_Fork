#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{

    QPoint p( 3, 7);
    QPoint q(-1, 4);
    int lengthSquared = QPoint::dotProduct(p, q);
}
