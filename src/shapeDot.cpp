/**
 * @file shapeDot.cpp
 * @brief Defines the functionality of the functions - as set out in shapeDot.h
 */
#pragma once
#include "shapeDot.h"

sl::shapeDot::shapeDot() {
	/// Default Constructor
}

sl::shapeDot::shapeDot(sf::Vector2f pointA, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 2;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::Points);
	/// Assign pointA and shapeColour
	shapeDot::pointA = pointA, sl::shapeDot::shapeColour = shapeColour;
}

void sl::shapeDot::populateArr() {
	/// Populate the array with the value of the point(s) and the colour of the shape
	shapeArr[0] = pointA, shapeArr[0].color = sl::shapeDot::shapeColour;
}

void sl::shapeDot::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeDot::~shapeDot() {
	/// Default Deconstructor
}