/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:46:47 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/11 21:54:03 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		static Fixed	det(Point u, Point v);

		Point(void);
		Point(Point const &point);
		Point(Fixed x, Fixed y);
		~Point(void);
		Point	&operator=(Point const &rhs_point);
		Point	operator-(Point const &rhs_point) const;
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed	_x;
		Fixed	_y;
};
#endif
