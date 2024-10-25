/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:45:44 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/25 09:47:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					fixedPoint;
	static const int	fractBits;
public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed( void );
	Fixed(const Fixed& obj);
	~Fixed( void );
	Fixed	operator=(const Fixed& right);
	// new
	Fixed(const int param);
	Fixed(const float param);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right );
