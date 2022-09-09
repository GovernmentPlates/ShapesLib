/**
 * @file shapeLine.h
 * @brief Defines the functions and variables used in shapeLine.cpp.
 */
#pragma once
#ifndef SHAPELINE_H
#define SHAPELINE_H
#include "shapeController.h"

namespace sl {
	class shapeLine : public shapeController {
	private:
		/// Define a vector to store the start and end points of the line
		sf::Vector2f pointA, pointB;
	public:
		shapeLine();
		/// Function takes in the start and end points (position/location) of the line on the screen via sf::Vector2f, as well as colour.
		shapeLine(sf::Vector2f pointA, sf::Vector2f pointB, sf::Color outlineColour);
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		void populateArr();
		~shapeLine();
	};
}

#endif