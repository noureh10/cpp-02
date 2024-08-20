/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:38:21 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/15 13:22:01 by nechaara         ###   ########.fr       */
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

