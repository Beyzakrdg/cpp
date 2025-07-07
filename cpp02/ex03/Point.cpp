#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    //std::cout << "Default constructor called" << std::endl;
}
Point::Point(const float x, const float y) : x(x), y(y)
{
}
Point::Point(const Point &num) : x(num.x), y(num.y)
{
}
Point& Point::operator =(const Point &num)
{
    (void)num;
    return *this;
}
Point::~Point()
{
    //std::cout << "Destructor called" << std::endl;
}
float Point::getX() const
{
    return (x.toFloat());
}
float Point::getY() const
{
    return (y.toFloat());
}
