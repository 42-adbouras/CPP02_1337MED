/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:28:51 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/31 10:57:13 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed( void ) : fixedPoint(0) {
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	fixedPoint = obj.getRawBits();
}

int	Fixed::getRawBits( void ) const {
	if (DEBUG)
		std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	fixedPoint = raw;
}

Fixed&	Fixed::operator=(const Fixed& right) {
	if (DEBUG)
		std::cout << "Copy assignment operator called" << std::endl;
	fixedPoint = right.getRawBits();
	return (*this);
}
