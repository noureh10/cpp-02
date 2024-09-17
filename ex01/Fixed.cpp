/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:38:21 by nechaara          #+#    #+#             */
/*   Updated: 2024/09/17 13:53:32 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	this->value = copy.getRawBits();
}

Fixed::Fixed(const int integer) {
	std::cout << "\e[0;33mInt Constructor called\e[0m" << std::endl;
	this->value = integer << EIGHTBIT;
}

Fixed::Fixed(const float floating_number) {
	std::cout << "\e[0;33mFloat Constructor called\e[0m" << std::endl;
	this->value = roundf(floating_number * (1 << EIGHTBIT));
}


Fixed::~Fixed() {
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign) {
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	if (this != &assign)
		this->value = assign.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "\e[0;33mgetRawBits member function called\e[0m" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

/**
 * @brief To Float function
 * Converts a stored fixed point value to a floating point value.
 * We divide the stored value by 2^8 to get the floating point value.
 * We then cast the result to a float.
 * @return a floating point value 
 */
float Fixed::toFloat(void) const {
	float new_val;

	new_val = ((float)this->value / (1 << EIGHTBIT));
	return (new_val);
}

/**
 * @brief To Integer function
 * Converts a stored fixed point value to an integer value.
 * We divide the stored value by 2^8 to get the integer value.
 * We then round the result to the nearest integer.
 * We then cast the result to an integer.
 * @return an integer value 
 */
int Fixed::toInt(void) const {
	int new_val;

	new_val = ((int)(roundf((float)this->value / (1 << EIGHTBIT))));
	return (new_val);
}


std::ostream	&operator<<(std::ostream &outputstream, const Fixed &fixed)
{
	outputstream << fixed.toFloat();
	return (outputstream);
}
