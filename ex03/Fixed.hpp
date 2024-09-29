/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:38:28 by nechaara          #+#    #+#             */
/*   Updated: 2024/09/29 19:36:28 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int value;
		int static const bits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed& operator = (const Fixed &assign);

		bool operator == (const Fixed &obj) const;
		bool operator != (const Fixed &obj) const;
		bool operator > (const Fixed &obj) const;
		bool operator < (const Fixed &obj) const;
		bool operator >= (const Fixed &obj) const;
		bool operator <= (const Fixed &obj) const;
		
		Fixed operator + (const Fixed &obj) const;
		Fixed operator - (const Fixed &obj) const;
		Fixed operator * (const Fixed &obj) const;
		Fixed operator / (const Fixed &obj) const;
		
		Fixed&	operator ++ (void);
		Fixed	operator ++ (int num);
		Fixed&	operator -- (void);
		Fixed	operator -- (int num);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		static Fixed& min(Fixed &obj1, Fixed &obj2);
		static Fixed& min(const Fixed &obj1, const Fixed &obj2);
		static Fixed& max(Fixed &obj1, Fixed &obj2);
		static Fixed& max(const Fixed &obj1, const Fixed &obj2);

};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif