
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int stored;
        static const int numberBit = 8;
    public:
        Fixed();
        Fixed(const Fixed &num);
        Fixed& operator =(const Fixed &num);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif