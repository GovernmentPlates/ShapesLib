/**
 * @file shapeArc.cpp
 * @brief Defines the functionality of the functions - as set out in shapeArc.cpp
 */
#pragma once
#include "shapeArc.h"

sl::shapeArc::shapeArc() {
	/// Default Constructor
}

sl::shapeArc::shapeArc(sf::Vector2f centre, float radX, float radY, float ang0, float ang1, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 60;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);
	/// Assign points, variables, shapeColour as well as calculate ang0, ang1 and inc
	shapeArc::centre = centre, shapeArc::radX = radX, shapeArc::radY = radY, shapeArc::ang0 = ang0 * pi / 180, shapeArc::ang1 = ang1 * pi / 180, shapeArc::theta = shapeArc::ang0;
	inc = (shapeArc::ang1 - shapeArc::ang0) / shapeArrSize;
	shapeArc::shapeColour = shapeColour;
}

void sl::shapeArc::populateArr() {
	// Using a for loop: for each point in shapeArrSize, calculate the x,y values from the centre + cos/sin of theta * radian, then assign the values to shapeArr, as well as setting the shapeColour
	for (int k = 0; k < shapeArrSize; k++) {
		float x = centre.x + cos(theta) * shapeArc::radX;
		float y = centre.y + sin(theta) * shapeArc::radY;
		theta = theta + inc;
		shapeArr[k] = sf::Vector2f(x, y);
		shapeArr[k].color = shapeArc::shapeColour;
	}
}

void sl::shapeArc::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeArc::~shapeArc() {
	/// Default Deconstructor
}