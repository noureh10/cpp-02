/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:48:01 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/20 14:25:44 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	for (Fixed test(0); test.getRawBits() < 10; ++test) {
		std::cout << test.getRawBits() << std::endl;
	}

 	Fixed x(100);
    Fixed y(0.5f);

    std::cout << "Initial value of x: " << x << std::endl;
    std::cout << "Initial value of y: " << y << std::endl;

    std::cout << "Pre-increment ++x: " << ++x << std::endl;
    std::cout << "Value of x after pre-increment: " << x << std::endl;

    std::cout << "Post-increment x++: " << x++ << std::endl;
    std::cout << "Value of x after post-increment: " << x << std::endl;

    std::cout << "Pre-decrement --y: " << --y << std::endl;
    std::cout << "Value of y after pre-decrement: " << y << std::endl;

    std::cout << "Post-decrement y--: " << y++ << std::endl;
    std::cout << "Value of y after post-decrement: " << y << std::endl;

    Fixed z = ++x + y++;
    std::cout << "Value of z after ++x + y++: " << z << std::endl;
    std::cout << "Final value of x: " << x << std::endl;
    std::cout << "Final value of y: " << y << std::endl; 
	return 0;
}