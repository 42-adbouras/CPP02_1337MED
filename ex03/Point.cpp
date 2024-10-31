/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:56:50 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/31 11:21:37 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0) { };

Point::Point( const float a, const float b ) : x(Fixed(a)), y(Fixed(b)) { };

Point::Point( const Point& obj ) : x(obj.x), y(obj.y) { };

Point::~Point ( void ) { return; }

Point&	Point::operator=( Point const &obj ) {
	(void)obj; return (*this);
}
