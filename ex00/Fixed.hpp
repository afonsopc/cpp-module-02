/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:09:41 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/11 21:33:31 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed	&operator=(const Fixed &fixed);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
