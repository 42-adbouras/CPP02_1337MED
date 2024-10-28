/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:00:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/28 20:04:37 by adbouras         ###   ########.fr       */
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
	Fixed	( void );
	Fixed	(const Fixed& obj);
	~Fixed	( void );
	Fixed	operator=(const Fixed& right);
	Fixed	( const int param );
	Fixed	( const float param );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	// new
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

	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );
	
	static	Fixed&	min( Fixed& left, Fixed& right);
	static	const Fixed&	min( const Fixed& left, const Fixed& right);
	static	Fixed&	max( Fixed& left, Fixed& right);
	static	const Fixed&	max( const Fixed& left, const Fixed& right);
};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right );