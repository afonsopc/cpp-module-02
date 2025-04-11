/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:14:20 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/11 21:40:53 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}
