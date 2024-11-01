/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:36:37 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/01 12:14:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	ft_area(Point a, Point b, Point c) {	// area = (a_x(b_y - c_y) + b_x(c_y - a_y) + c_x(a_y - b_y)) / 2
	Fixed	area;
	
	area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY())) / 2;
	return ((area < 0) ? area * (-1) : area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	P1 = ft_area(a, b, c);
	Fixed	P2 = ft_area(point, a, b);
	Fixed	P3 = ft_area(point, b, c);
	Fixed	P4 = ft_area(point, c, a);

	bool	valid = (P1 > 0) && (P2 > 0) && (P3 > 0) && (P4 > 0);
	return (P1 == P2 + P3 + P4 && valid);
}
