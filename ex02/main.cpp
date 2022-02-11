/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:47 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/11 20:14:00 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	{
		Fixed		a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed		a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::min( a, b ) << std::endl;
	}
	{
		Fixed const a( 100 );
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << a / b << std::endl;
		std::cout << b / a << std::endl;
		std::cout << Fixed(5.5f) / Fixed(2) << std::endl;
		std::cout << a - b << std::endl;
		std::cout << b - a << std::endl;
		std::cout << a * b << std::endl;
		std::cout << b * a << std::endl;
		std::cout << a + b << std::endl;
		std::cout << b + a << std::endl;
		std::cout << Fixed::max( a / b , b ) << std::endl;
		std::cout << Fixed::min( a / b , b ) << std::endl;
	}
}
