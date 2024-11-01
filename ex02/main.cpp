/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:01:25 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/01 12:08:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a					<< std::endl;
	std::cout << ++a				<< std::endl;
	std::cout << a					<< std::endl;
	std::cout << a++				<< std::endl;	
	std::cout << a					<< std::endl;

	std::cout << b					<< std::endl;

	std::cout << Fixed::max( a, b )	<< std::endl;

	return (0);
}
