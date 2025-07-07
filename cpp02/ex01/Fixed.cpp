
#include "Fixed.hpp"

Fixed::Fixed()
{
    this->stored = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNumber)
{
    std::cout << "Int constructor called" << std::endl;
    stored = intNumber << number;
}

Fixed::Fixed(const float floatNumber)
{
    std::cout << "Float constructor called" << std::endl;
    stored = roundf(floatNumber * (1 << number));
}

Fixed::Fixed(const Fixed& num) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = num;
}

Fixed& Fixed::operator=(const Fixed& num) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &num)
        this->stored = num.stored;
    return *this;
}

float Fixed::toFloat( void ) const
{
    return ((float)stored / (1 << number));
}

int Fixed::toInt( void ) const
{
    return (stored >> 8);
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->stored;
}

void Fixed::setRawBits(int const raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
    this->stored = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& ostream, const Fixed& fixed)
{
    ostream << fixed.toFloat();
    return ostream;
}