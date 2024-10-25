/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:05:35 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/25 09:30:29 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed( void );
	~Fixed();
	Fixed(const Fixed& obj);
	Fixed&	operator=(const Fixed& right);
private:
	int					fixedPoint;
	static const int	fractBits;
};
