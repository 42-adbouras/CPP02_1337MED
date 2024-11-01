/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:00:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/01 12:08:18 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

#define	DEBUG	0

class Fixed
{
private:
	int					fixedPoint;
	static const int	fractBits;
public:
	Fixed	( void );
	Fixed	( const int param );
	Fixed	( const Fixed& obj );
	Fixed	( const float param );
	~Fixed	( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int		toInt( void ) const;
	float	toFloat( void ) const;

	Fixed	operator=( const Fixed& right );

	bool	operator>( const Fixed& right )		const;
	bool	operator<( const Fixed& right )		const;
	bool	operator>=( const Fixed& right )	const;
	bool	operator<=( const Fixed& right )	const;
	bool	operator==( const Fixed& right )	const;
	bool	operator!=( const Fixed& right )	const;

	Fixed	operator+( const Fixed& right )		const;
	Fixed	operator-( const Fixed& right )		const;
	Fixed	operator*( const Fixed& right )		const;
	Fixed	operator/( const Fixed& right )		const;

	Fixed	operator++( int );
	Fixed	operator--( int );
	Fixed&	operator++( void );
	Fixed&	operator--( void );
	
	static	Fixed&	min( Fixed& left, Fixed& right );
	static	Fixed&	max( Fixed& left, Fixed& right );
	static	const Fixed&	min( const Fixed& left, const Fixed& right );
	static	const Fixed&	max( const Fixed& left, const Fixed& right );
};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right );
