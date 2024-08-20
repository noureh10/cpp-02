/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:28:34 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/20 18:26:33 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		const 	Fixed x;
		const 	Fixed y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& copy);
		Point& Point::operator=(const Fixed &assign);
		~Point();
		void setPoints(const float x, const float y);
};


#endif