/**
 * @file shapeCircle.h
 * @brief Defines the functions and variables used in shapeCircle.cpp.
 */
#pragma once
#ifndef SHAPECIRCLE_H
#define SHAPECIRCLE_H

#include "shapeEllipse.h"

namespace sl {
	class shapeCircle : public shapeEllipse {
	public:
		shapeCircle();
		// Function takes in several variables; centre vector (for location on the screen in X,Y), radian X value, theta value and the shape colour
		shapeCircle(sf::Vector2f centre, float RadX, float theta, sf::Color shapeColour);
		void populateArr();
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		~shapeCircle();
	};
}

#endif // !SHAPECIRCLE_H