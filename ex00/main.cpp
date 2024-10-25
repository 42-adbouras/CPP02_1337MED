/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:49 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/24 19:20:21 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// class	Foo
// {
// public:
// 	void	set(int i, int value) { xPtr[i] = value; }
// 	int		get( int i ) const { return (xPtr[i]); }
// 	int		getSize( void ) const { return (size); }
// 	Foo		( int size ) { xPtr = new int[size]; this->size = size; }
// 	void	operator=(const Foo& right) {
// 		this->size = right.size;
// 		// delete []xPtr;
// 		for (int i = 0; i < size; i++)
// 			xPtr[i] = right.xPtr[i];
// 	}
// 	// Foo		( const Foo& copy) {
// 	// 	xPtr = new int;
// 	// 	*xPtr = copy.get();
// 	// }
// 	~Foo	( void ) { delete []xPtr; }
// private:
// 	int	*xPtr;
// 	int	size;
// };

int	main( void ) {

	Fixed a;
	// Fixed b( a );
	Fixed c;
	c = a;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	// b.setRawBits(2);
	// c.setRawBits(1337);
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return 0;
}