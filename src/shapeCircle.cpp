/**
 * @file shapeCircle.cpp
 * @brief Defines the functionality of the functions - as set out in shapeCircle.h
 */
#pragma once
#include "shapeCircle.h"

sl::shapeCircle::shapeCircle() {
	/// Default Constructor
}

sl::shapeCircle::shapeCircle(sf::Vector2f centre, float RadX, float theta, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 60;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);
	// Assign variables, shapeColour as well as calculate inc variable
	shapeCircle::inc = 360 / shapeArrSize;
	shapeCircle::centre = centre, shapeCircle::radX = RadX, shapeCircle::theta = theta, shapeCircle::shapeColour = shapeColour;
}

void sl::shapeCircle::populateArr() {
	// Using a for loop: for each point in shapeArrSize, calculate the x,y values from the centre + cos/sin of theta * radian, then assign the values to shapeArr, as well as setting the shapeColour
	for (int k = 0; k < shapeArrSize; k++) {
		theta = theta + shapeCircle::inc;
		float x = centre.x + cos(theta) * shapeCircle::radX;
		float y = centre.y + sin(theta) * shapeCircle::radX;
		shapeArr[k] = sf::Vector2f(x, y);
		shapeArr[k].color = shapeCircle::shapeColour;
	}
}

void sl::shapeCircle::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeCircle::~shapeCircle() {
	/// Default Deconstructor
}