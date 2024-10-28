/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:45:39 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/28 09:24:59 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed( void ) : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = obj.getRawBits();
}

int		Fixed::getRawBits( void ) const {
	return (this->fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
}

Fixed	Fixed::operator=( const Fixed& right ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = right.getRawBits();
	return (*this);
}

Fixed::Fixed( const int param ) : fixedPoint(param << (1 * fractBits)) {
	std::cout << "Int constructor called" << fixedPoint << std::endl;
}

Fixed::Fixed( const float param ) :  fixedPoint((int)roundf(param * (1 << fractBits))) {
	std::cout << "Float constructor called" << fixedPoint << std::endl;
}

float	Fixed::toFloat( void ) const {
	float	result;

	result = static_cast<float>(fixedPoint) / (1 << fractBits);
	return (result);
}

int		Fixed::toInt( void ) const {
	return (static_cast<int>(roundf(static_cast<float>(fixedPoint) / (1 << fractBits))));
}

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right ) {
    COUT << right.toFloat();
    return (COUT);
}
