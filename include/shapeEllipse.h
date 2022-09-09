/**
 * @file shapeEllipse.h
 * @brief Defines the functions and variables used in shapeEllipse.cpp
 */
#pragma once
#ifndef SHAPEELLIPSE_H
#define SHAPEELLIPSE_H

#include "shapeArc.h"

namespace sl {
	class shapeEllipse : public shapeArc {
	public:
		shapeEllipse();
		// Function takes in several variables; centre vector (for location on the screen in X,Y), radian X & Y values, theta value and the shape colour
		shapeEllipse(sf::Vector2f centre, float RadX, float RadY, float theta, sf::Color shapeColour);
		void populateArr();
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		~shapeEllipse();
	};
}

#endif // !SHAPEELLIPSE_H