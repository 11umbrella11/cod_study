#ifndef COLORPOINT_H
#define COLORPOINT_H
#include "Point.h"

class ColorPoint : public Point{
    string color;
public:
ColorPoint();
~ColorPoint();
void setColor(string color);
void showColorPrint();
}
#endif