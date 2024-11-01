/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:05:35 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/01 12:05:30 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define DEBUG	1

class Fixed
{
public:
	Fixed( void );
	~Fixed();
	Fixed( const Fixed& obj );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed&	operator=( const Fixed& right) ;
private:
	int					fixedPoint;
	static const int	fractBits;
};
