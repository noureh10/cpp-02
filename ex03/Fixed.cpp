/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:38:21 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/20 18:05:13 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy) {
	this->value = copy.getRawBits();
}

Fixed::Fixed(const int integer) {
	this->value = integer << EIGHTBIT;
}

Fixed::Fixed(const float floating_number) {
	this->value = roundf(floating_number * (1 << EIGHTBIT));
}
	
Fixed::~Fixed() {}

Fixed & Fixed::operator = (const Fixed &assign) {
	if (this != &assign)
		this->value = assign.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->value);
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

float Fixed::toFloat(void) const {
	float new_val;

	new_val = ((float)this->value / (1 << EIGHTBIT));
	return (new_val);
}

int Fixed::toInt(void) const {
	int new_val;

	new_val = ((int)(roundf((float)this->value / (1 << EIGHTBIT))));
	return (new_val);
}

// OPERATOR

std::ostream	&operator<<(std::ostream &outputstream, const Fixed &fixed)
{
	outputstream << fixed.toFloat();
	return (outputstream);
}

bool Fixed::operator == (const Fixed &obj) const {
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator != (const Fixed &obj) const {
	return (this->toFloat() != obj.toFloat());
}

bool Fixed::operator > (const Fixed &obj) const {
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator < (const Fixed &obj) const {
	return (this->toFloat() < obj.toFloat()); 
}

bool Fixed::operator >= (const Fixed &obj) const {
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator <= (const Fixed &obj) const {
	return (this->toFloat() <= obj.toFloat());
}
	
Fixed Fixed::operator + (const Fixed &obj) const {
	int		value;
	Fixed	opt;

	value = this->value + obj.getRawBits();
	opt.value = value;
	return (opt);
}

Fixed Fixed::operator - (const Fixed &obj) const {
	int		value;
	Fixed	opt;

	value = this->value - obj.getRawBits();
	opt.value = value;
	return (opt);
}

Fixed Fixed::operator * (const Fixed &obj) const {
	int		value;
	Fixed	opt;

	value = (this->value * obj.getRawBits()) / (1 << EIGHTBIT);
	opt.value = value;
	return (opt);
}

Fixed Fixed::operator / (const Fixed &obj) const {
	int value;
	Fixed opt;

	value = (this->value * (1 << EIGHTBIT)) / obj.getRawBits();
	opt.value = value;
	return (opt);
}

// INCREMENT / DECREMENT OPERATORS

Fixed& Fixed::operator ++ (void) {
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator ++ (int num) {
	(void) num;
	Fixed opt = (*this);
	this->value++;
	return (opt);
}

Fixed& Fixed::operator -- (void) {
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator -- (int num) {
	(void) num;
	Fixed opt = (*this);
	this->value--;
	return (opt);
}

Fixed&	Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return ((Fixed&)obj1);
	return ((Fixed&)obj2);
}

Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	return (obj2);
}

Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	return (obj2);
}

Fixed&	Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return ((Fixed&)obj1);
	return ((Fixed&)obj2);
}
