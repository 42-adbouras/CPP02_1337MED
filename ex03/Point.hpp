/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:56:57 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/30 14:40:36 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed y;
public:
	Point ( void );
	Point ( const float a, const float b );
	Point ( const Point& obj );
	~Point ( void );
	Point&	operator=(Point const &other);

	Fixed	getX( void ) { return (this->x); }
	Fixed	getY( void ) { return (this->y); }
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
