/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:01:04 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/28 20:06:06 by adbouras         ###   ########.fr       */
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

Fixed::Fixed( const int param ) : fixedPoint(param << fractBits) {
	std::cout << "Int constructor called" << fixedPoint << std::endl;
}

Fixed::Fixed( const float param ) : fixedPoint((int)roundf(param * (1 << fractBits))) {
	std::cout << "Float constructor called" << fixedPoint << std::endl;
}

float	Fixed::toFloat( void ) const {
	return ((float)(fixedPoint) / (1 << fractBits));
}

int		Fixed::toInt( void ) const {
	return ((int)(roundf((float)fixedPoint / (1 << fractBits))));
}

std::ostream&	operator<<( std::ostream& COUT, const Fixed& right ) {
    COUT << right.toFloat(); return (COUT);
}

bool	Fixed::operator>( const Fixed& right ) const {
	return (this->getRawBits() > right.getRawBits());
}

bool	Fixed::operator<( const Fixed& right ) const {
	return (this->getRawBits() < right.getRawBits());
}

bool	Fixed::operator>=( const Fixed& right ) const {
	return (this->getRawBits() >= right.getRawBits());
}

bool	Fixed::operator<=( const Fixed& right ) const {
	return (this->getRawBits() <= right.getRawBits());
}

bool	Fixed::operator==( const Fixed& right ) const {
	return (this->getRawBits() == right.getRawBits());
}

bool	Fixed::operator!=( const Fixed& right ) const {
	return (this->getRawBits() != right.getRawBits());
}

Fixed	Fixed::operator+( const Fixed& right ) const {
	return (Fixed(this->toFloat() + right.toFloat()));
}

Fixed	Fixed::operator-( const Fixed& right ) const {
	return (Fixed(this->toFloat() - right.toFloat()));
}

Fixed	Fixed::operator*( const Fixed& right ) const {
	return (Fixed(this->toFloat() * right.toFloat()));
}

Fixed	Fixed::operator/( const Fixed& right ) const {
	return (Fixed(this->toFloat() / right.toFloat()));
}

Fixed&	Fixed::operator++( void ) {
	setRawBits(fixedPoint + (1 << fractBits)); return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed temp(*this);
	
	setRawBits(fixedPoint + (1 << fractBits)); return (temp);
}

Fixed&	Fixed::operator--( void ) {
	setRawBits(fixedPoint - (1 << fractBits)); return (*this);
}

Fixed	Fixed::operator--( int ) {
	Fixed temp(*this);
	
	setRawBits(fixedPoint - (1 << fractBits)); return (temp);
}

Fixed&	Fixed::min( Fixed& left, Fixed& right) {
	return (left < right ? left : right); 
}

const Fixed&	Fixed::min( const Fixed& left, const Fixed& right) {
	return (left < right ? left : right); 
}

Fixed&	Fixed::max( Fixed& left, Fixed& right) {
	return (left > right ? left : right); 
}

const Fixed&	Fixed::max( const Fixed& left, const Fixed& right) {
	return (left > right ? left : right); 
}
