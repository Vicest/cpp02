/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:47 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/10 20:22:47 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	{
		Fixed a;
		Fixed b(a);
		Fixed c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	{
		std::cout << "Additional tests:" << std::endl;
		Fixed	a;

		std::cout << a.getRawBits() << std::endl;
		a.setRawBits(0x000000FF);
		std::cout << a.getRawBits() << std::endl;
		return 0;
	}
}
