/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:10:36 by nechaara          #+#    #+#             */
/*   Updated: 2024/09/04 15:54:44 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed sign(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

/**
 * @brief Determines if a point is inside a triangle using the barycentric sign method.
 * 
 * This function checks whether a given point (`point`) lies inside the triangle
 * formed by three other points (`a`, `b`, `c`). The check is performed using
 * the sign of areas (or cross products) between the point and the triangle's vertices.
 * 
 * @param a The first vertex of the triangle.
 * @param b The second vertex of the triangle.
 * @param c The third vertex of the triangle.
 * @param point The point to check for being inside the triangle.
 * @return true if the point is inside the triangle, false otherwise.
 */

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed sign1, sign2, sign3;

    sign1 = sign(point, a, b);
    sign2 = sign(point, b, c);
    sign3 = sign(point, c, a);

    bool hasNeg = (sign1 < 0) || (sign2 < 0) || (sign3 < 0);
    bool hasPos = (sign1 > 0) || (sign2 > 0) || (sign3 > 0);

    return !(hasNeg && hasPos) && (sign1 != 0) && (sign2 != 0) && (sign3 != 0);
}
