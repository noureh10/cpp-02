/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:38:28 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/15 13:03:40 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int value;
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);
		Fixed & operator=(const Fixed &assign);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif