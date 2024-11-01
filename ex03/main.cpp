/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:31:38 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/01 17:24:09 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static std::string	boolToStr( bool value ) {
	return (value ? "is located inside triangle ABC"
				: "is located outside triangle ABC");
}

int	main( void ) {

	{
		const Point	a(2, 3), b(6, 2), c(7, 9);
		Point		x(3, 3), y(0, 0), z(2, 3);
		std::cout << "The point x " << boolToStr(bsp(a, b, c, x)) << std::endl;
		std::cout << "The point y " << boolToStr(bsp(a, b, c, y)) << std::endl;
		std::cout << "The point z " << boolToStr(bsp(a, b, c, z)) << std::endl;
		std::cout << std::endl;
	}
	{
		const Point	a(0, 0), b(5, 0), c(0, 5);
		Point		x(3, 2), y(1, 1), z(2.9f, 1.9f);
		std::cout << "The point x " << boolToStr(bsp(a, b, c, x)) << std::endl;
		std::cout << "The point y " << boolToStr(bsp(a, b, c, y)) << std::endl;
		std::cout << "The point z " << boolToStr(bsp(a, b, c, z)) << std::endl;
		std::cout << std::endl;
	}
	{
		const Point	a(2, 2), b(2, -6), c(-4, 1);
		Point		x(0, 0), y(4, -3), z(-3, 1);
		std::cout << "The point x " << boolToStr(bsp(a, b, c, x)) << std::endl;
		std::cout << "The point y " << boolToStr(bsp(a, b, c, y)) << std::endl;
		std::cout << "The point z " << boolToStr(bsp(a, b, c, z)) << std::endl;
		std::cout << std::endl;
	}
}
