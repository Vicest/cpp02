/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:47 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/11 21:58:12 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	{
		Point	a;
		Point	b;
		Point	c;
		Point	d;

		std::cout << bsp(a, b, c, d) << std::endl; //False
		a = Point(Fixed(1), Fixed());
		b = Point(Fixed(-1), Fixed());
		c = Point(Fixed(), Fixed(1));
		d = Point(Fixed(), Fixed(0.5f));
		std::cout << bsp(a, b, c, d) << std::endl; //True
		std::cout << bsp(a, b, c, a) << std::endl; //False
		std::cout << bsp(a, b, c, b) << std::endl; //False
		std::cout << bsp(a, b, c, c) << std::endl; //False
		d = Point(Fixed(-1), Fixed(-1));
		std::cout << bsp(a, b, c, d) << std::endl; //False
		d = Point(Fixed(1), Fixed(1));
		std::cout << bsp(a, b, c, d) << std::endl; //False
		d = Point(Fixed(0.4f), Fixed(0.4f));
		std::cout << bsp(a, b, c, d) << std::endl; //True
		d = Point(Fixed(-0.4f), Fixed(0.4f));
		std::cout << bsp(a, b, c, d) << std::endl; //True
		d = Point(Fixed(0.4f), Fixed(-0.4f));
		std::cout << bsp(a, b, c, d) << std::endl; //False
		d = Point(Fixed(0.1f), Fixed(0.7f));
		std::cout << bsp(a, b, c, d) << std::endl; //True
	}
}
