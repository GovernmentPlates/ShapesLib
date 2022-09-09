/**
 * @file shapeController.h
 * @brief Defines the functions and variables used in shapeController.h. These functions and variables are used throughout the ShapesLib library
 */
#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include "SFML/Graphics.hpp" //Import the Graphics.hpp header file from SFML

namespace sl {
	class shapeController : public sf::Drawable {
	protected:
		/// Used to store the size of the shape array
		int shapeArrSize;

		/// Used to store the various points of a shape in an array
		sf::VertexArray shapeArr;

		/// Used to store the [outline] colour of the shape -- uses the sf::Color class
		sf::Color shapeColour;

		/// Function used to draw (render) shapes
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;

		/// Function used to populate the shapeArr array
		virtual void populateArr() = 0;
	};
}

#endif // !SHAPE_H
