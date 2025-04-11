/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:14:20 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/11 23:13:49 by afpachec         ###   ########.fr       */
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

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = i << this->_fractional_bits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(f * (1 << this->_fractional_bits));
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fixed_point / (1 << this->_fractional_bits));
}

int	Fixed::toInt(void) const {
	return (this->_fixed_point >> this->_fractional_bits);
}

int	Fixed::getRawBits(void) const {
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed_point = raw;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	return (out << fixed.toFloat());
}
