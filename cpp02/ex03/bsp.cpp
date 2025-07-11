
#include "Point.hpp"

float triangleArea(Point const &a, Point const &b, Point const &c)
{
    float area
        = std::fabs(a.getX() * (b.getY() - c.getY()) +
                    b.getX() * (c.getY() - a.getY()) +
                    c.getX() * (a.getY() - b.getY())) * 0.5f;
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

    if ((areaAcoordA + areaAccordB + areaAccordC) - total <= 0.00001f)
        return true;

    return false;
}