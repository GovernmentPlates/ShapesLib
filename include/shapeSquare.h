/**
 * @file shapeSquare.h
 * @brief Defines the functions and variables used in shapeSquare.cpp.
 */
#pragma once
#ifndef SHAPESQUARE_H
#define SHAPESQUARE_H

#include "shapeRectangle.h"

namespace sl {
	class shapeSquare : public sl::shapeRectangle {
	public:
		shapeSquare();
		/// Function takes in the points (position/location) of the square on the screen via sf::Vector2f, as well as colour.
		shapeSquare(sf::Vector2f pointA, sf::Vector2f pointB, sf::Color shapeColour);
		void populateArr();
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		~shapeSquare();
	};
}

#endif // !SHAPESQUARE_H