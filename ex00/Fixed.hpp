/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:31:17 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/10 19:15:34 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		~Fixed(void);
		Fixed	&operator=(Fixed const &new_fixed);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;

	private:
		static int const	_n_fbits;
		int					_rawBits;
};
#endif
