/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:05:16 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 12:17:40 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:
        int level;
        void debug( void );
        void info( void );
        void warning( void );
        void error( void ); 
    public:
        Harl();
        void    setlevel(std::string level);
        int     getlevel();
        void    proccess();
};

#endif