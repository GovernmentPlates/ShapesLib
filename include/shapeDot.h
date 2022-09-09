/**
 * @file shapeDot.h
 * @brief Defines the functions and variables used in shapeDot.cpp.
 */
#pragma once
#ifndef SHAPEDOT_H
#define SHAPEDOT_H
#include "shapeController.h" 

namespace sl {
	class shapeDot : public shapeController {
	private:
		/// Define a vector to store the position of the dot
		sf::Vector2f pointA;
	public:
		shapeDot();
		/// Function takes in the point (position/location) of the dot on the screen via sf::Vector2f, as well as colour.
		shapeDot(sf::Vector2f pointA, sf::Color shapeColour);
		void populateArr();
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		~shapeDot();
	};
}

#endif SHAPEDOT_H