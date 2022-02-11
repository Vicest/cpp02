/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:46:44 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/11 21:54:30 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	Point::det(Point u, Point v)
{
	return ((u.getX() * v.getY()) - (u.getY() * v.getX()));
}

Point::Point(void) : _x(Fixed()), _y(Fixed()){}

Point::Point(Point const &p)
{
	*this = p;
}

Point::Point(Fixed x, Fixed y) : _x(x), _y(y){}

Point::~Point(void){}

Point	&Point::operator=(Point const &rhs_point)
{
	this->_x = rhs_point.getX();
	this->_y = rhs_point.getY();
	return (*this);
}

Point	Point::operator-(Point const &rhs_point) const
{
	Fixed	x = this->_x - rhs_point.getX();
	Fixed	y = this->_y - rhs_point.getY();

	return (Point(x, y));
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}
