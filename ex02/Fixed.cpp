/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:31:03 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/11 20:12:29 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int const	Fixed::_n_fbits = 8;

Fixed	Fixed::max(Fixed const &lhs_fixed, Fixed const &rhs_fixed)
{
	if (lhs_fixed.getRawBits() > rhs_fixed.getRawBits())
		return (lhs_fixed);
	return (rhs_fixed);
}

Fixed	Fixed::min(Fixed const &lhs_fixed, Fixed const &rhs_fixed)
{
	if (lhs_fixed.getRawBits() < rhs_fixed.getRawBits())
		return (lhs_fixed);
	return (rhs_fixed);
}

Fixed::Fixed(void) : _rawBits(0)
{
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::Fixed(int i)
{
	this->_rawBits = i << Fixed::_n_fbits;
}

Fixed::Fixed(float f)
{
	this->_rawBits = roundf(f * (1 << Fixed::_n_fbits));
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(Fixed const &rhs_fixed)
{
	this->_rawBits = rhs_fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator<(Fixed const &rhs_fixed) const
{
	return (this->_rawBits < rhs_fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs_fixed) const
{
	return (this->_rawBits <= rhs_fixed.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs_fixed) const
{
	return (this->_rawBits > rhs_fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs_fixed) const
{
	return (this->_rawBits >= rhs_fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs_fixed) const
{
	return (this->_rawBits == rhs_fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs_fixed) const
{
	return (this->_rawBits != rhs_fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs_fixed) const
{
	Fixed	result;

	result.setRawBits(this->_rawBits + rhs_fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &rhs_fixed) const
{
	Fixed	result;

	result.setRawBits(this->_rawBits - rhs_fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &rhs_fixed) const
{
	Fixed	result;

	result.setRawBits(this->_rawBits * rhs_fixed.getRawBits() >> Fixed::_n_fbits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const &rhs_fixed) const
{
	return (Fixed(this->toFloat() / rhs_fixed.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator++(int postinc)
{
	Fixed	aux(*this);

	(void)postinc;
	this->_rawBits += 1;
	return (aux);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int postdec)
{
	Fixed	aux(*this);

	(void)postdec;
	this->_rawBits -= 1;
	return (aux);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_n_fbits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits  / (1 << Fixed::_n_fbits));
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
