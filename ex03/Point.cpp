/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:25:04 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/21 15:50:06 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {}

Point::~Point() {}

Point &Point::operator = (const Point &assign) {
	(Fixed)this->x = assign.x;
	(Fixed)this->y = assign.y;
	return (*this);
}

Fixed const &Point::getX() const {
	return (x);
}

Fixed const &Point::getY() const {
	return (y);
}