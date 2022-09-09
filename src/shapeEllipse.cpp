/**
 * @file shapeEllipse.cpp
 * @brief Defines the functionality of the functions - as set out in shapeEllipse.h
 */
#pragma once
#include "shapeEllipse.h"

sl::shapeEllipse::shapeEllipse() {
	/// Default Constructor
}

sl::shapeEllipse::shapeEllipse(sf::Vector2f centre, float RadX, float RadY, float theta, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 60;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);
	// Assign variables, shapeColour as well as calculate inc variable
	shapeEllipse::centre = centre, shapeEllipse::radX = RadX, shapeEllipse::radY = RadY, shapeEllipse::theta = theta;
	shapeEllipse::shapeColour = shapeColour;
	inc = 360 / shapeArrSize;
}

void sl::shapeEllipse::populateArr() {
	// Using a for loop: for each point in shapeArrSize, calculate the x,y values from the centre + cos/sin of theta * radian, then assign the values to shapeArr, as well as setting the shapeColour
	for (int k = 0; k < shapeArrSize; k++) {
		float x = centre.x + cos(theta) * shapeEllipse::radX;
		float y = centre.y + sin(theta) * shapeEllipse::radY;
		theta = theta + inc;
		shapeArr[k] = sf::Vector2f(x, y);
		shapeArr[k].color = shapeEllipse::shapeColour;
	}
}

void sl::shapeEllipse::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeEllipse::~shapeEllipse() {
	/// Default Deconstructor
}