/**
 * @file shapeRectangle.h
 * @brief Defines the functions and variables used in shapeRectangle.cpp.
 */
#pragma once
#ifndef SHAPERECTANGLE_H
#include "shapeController.h"

namespace sl {
	class shapeRectangle : public shapeController {
	public:
		shapeRectangle();
		/// Function takes in the points (position/location) of the rectangle on the screen via sf::Vector2f, as well as colour.
		shapeRectangle(sf::Vector2f pointA, sf::Vector2f pointB, sf::Vector2f pointC, sf::Vector2f pointD, sf::Color shapeColour);
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		void populateArr();
		~shapeRectangle();
	protected:
		/// Define several vectors to store the points of the rectangle
		sf::Vector2f pointA, pointB, pointC, pointD;
	};
}

#endif // !SHAPERECTANGLE_H