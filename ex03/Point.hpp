/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:28:34 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/21 15:50:08 by nechaara         ###   ########.fr       */
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
		Point &operator = (const Point &assign);
		~Point();
		Fixed const &getX() const;
		Fixed const &getY() const;

};


#endif