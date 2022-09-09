/**
 * @file shapeTriangle.h
 * @brief Defines the functions and variables used in shapeTriangle.cpp.
 */
#pragma once
#ifndef SHAPETRIANGLE_H
#define SHAPETRIANGLE_H

#include "shapeController.h"

namespace sl {
	class shapeTriangle : public shapeController {
	private:
		/// Define several vectors to store the points of the triangle
		sf::Vector2f pointA, pointB, pointC;
	public:
		shapeTriangle();
		/// Function takes in the points (position/location) of the triangle on the screen via sf::Vector2f, as well as colour
		shapeTriangle(sf::Vector2f pointA, sf::Vector2f pointB, sf::Vector2f pointC, sf::Color shapeColour);
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		void populateArr();
		~shapeTriangle();
	};
}

#endif // !SHAPETRIANGLE_H