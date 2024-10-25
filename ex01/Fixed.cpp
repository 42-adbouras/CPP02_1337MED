/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:45:39 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/25 10:37:18 by adbouras         ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
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

Fixed::Fixed( const int param ) : fixedPoint(param << fractBits) {
	std::cout << "Int constructor called" << param<< std::endl;
}

Fixed::Fixed( const float param ) {
	std::cout << "Float constructor called" << param << std::endl;
}

float	Fixed::toFloat( void ) const {
	float	result;
	
	result = (float)(this->fixedPoint) / (1 << this->fractBits);
	return (result);
}

int		Fixed::toInt( void ) const {
	return (1337);
}

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right ) {
    COUT << right.getRawBits();
    return (COUT);
}