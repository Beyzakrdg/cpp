
#include "Point.hpp"

float triangleArea(Point const &a, Point const &b, Point const &c)
{
    float area
        = std::fabs(a.getX() * (b.getY() - c.getY()) +
            b.getX() * (a.getY() - c.getY()) +
            c.getX() * (a.getY() - b.getY())) * 0.5;
    return (area);
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float total = triangleArea(a, b, c);
    float areaAcoordA = triangleArea(point, b, c);
    float areaAccordB = triangleArea(a, point, c);
    float areaAccordC = triangleArea(a, b, point);

    if (areaAcoordA == 0 || areaAccordB == 0 || areaAccordC == 0)
        return false;

    if (total == areaAcoordA + areaAccordB + areaAccordC)
        return true;

    return false;
}