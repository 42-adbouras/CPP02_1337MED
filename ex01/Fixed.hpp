/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:45:44 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/01 12:06:28 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

#define DEBUG	1

class Fixed
{
private:
	int					fixedPoint;
	static const int	fractBits;
public:
	Fixed	( void );
	Fixed	( const Fixed& obj );
	Fixed	( const int param );
	Fixed	( const float param );
	~Fixed	( void );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed	operator=( const Fixed& right );
};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right );
