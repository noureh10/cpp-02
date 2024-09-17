/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:06:57 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/21 15:50:01 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
	// Inside
    std::cout << ((bsp(Point(7, 7), Point(11, 1), Point(2, 2), Point(7, 3))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(1, 1), Point(2, 2), Point(3, 1), Point(2, 1.5f))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(0, 0), Point(4, 0), Point(2, 4), Point(2, 2))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(3, 4), Point(5, 11), Point(12, 8), Point(6, 7))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(-5, -5), Point(-3, -2), Point(-8, -1), Point(-4, -3))) ? "Is inside\n" : "Is outside\n");

    // Border
    std::cout << ((bsp(Point(7, 7), Point(2, 2), Point(-3, 20), Point(7, 7))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(0, 0))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(0, 0), Point(10, 0), Point(5, 5), Point(5, 0))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(-4, -2), Point(-6, 3), Point(-10, 1), Point(-6, 3))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(0, 0), Point(10, 0), Point(0, 7), Point(0.0f, 4))) ? "Is inside\n" : "Is outside\n");

    // Outside
    std::cout << ((bsp(Point(11, 1), Point(2, 2), Point(10.0f, 32), Point(0.0f, 120))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(-5, -5), Point(-3, -3), Point(-8, -1), Point(-10, -10))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(5, 5), Point(10, 10), Point(15, 5), Point(20, 0))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(-3, -2), Point(-6, 3), Point(-10, 1), Point(-1, -1))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(0, 0), Point(0, 10), Point(10, 0), Point(-1, -1))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(7.3f, 3), Point(-3.9f, 20), Point(11, 1), Point(10.0f, 32.123f))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(10.45f, 32), Point(11, 1.98f), Point(7.1f, 7.2f), Point(2, 2))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(11, 1), Point(2, 2), Point(10.0f, 32), Point(-5, 120))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(4, 4), Point(8, 8), Point(4, 8), Point(6, 12))) ? "Is inside\n" : "Is outside\n");
    std::cout << ((bsp(Point(0, 0), Point(5, 0), Point(0, 5), Point(6, 6))) ? "Is inside\n" : "Is outside\n");
}
