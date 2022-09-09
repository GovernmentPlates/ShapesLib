/**
 * @file shapeArch.h
 * @brief Defines the functions and variables used in shapeArch.cpp.
 */
#pragma once
#ifndef SHAPEARC_H
#define SHAPEARC_H
#include "shapeController.h"
#include <cmath>

namespace sl {
	class shapeArc : public shapeController {
	public:
		shapeArc();
		/// Function takes in several variables; centre vector (for location on the screen in X,Y), radian X & Y values, angle values and the shape colour
		shapeArc(sf::Vector2f centre, float radX, float radY, float ang0, float ang1, sf::Color shapeColour);
		void populateArr();
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		~shapeArc();
	protected:
		/// Define pi
		const double pi = 3.1415926535897;
		/// Define a vector for the centre of the arc
		sf::Vector2f centre;
		/// Define variables for the arc - used in the calculation process
		float radX, radY, ang0, ang1, theta, inc;
	};
}

#endif // !SHAPEARC_H