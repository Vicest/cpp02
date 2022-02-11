/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:47:04 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/11 21:54:49 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>
//Math from:https://mathworld.wolfram.com/TriangleInterior.html
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	denom = Point::det(b - a, c - a);
	Fixed const	alpha = (Point::det(point, c - a) - Point::det(a, c - a)) / denom;
	Fixed const	beta = Fixed(0) - ((Point::det(point, b - a) - Point::det(a, b - a))) / denom;
	return (alpha > Fixed(0) && beta > Fixed(0) && alpha + beta < Fixed(1));
}
