/**
 * @file shapeLine.cpp
 * @brief Defines the functionality of the functions - as set out in shapeLine.h
 */
#pragma once
#include "shapeLine.h"

sl::shapeLine::shapeLine() {
	/// Default Constructor
}

sl::shapeLine::shapeLine(sf::Vector2f pointA, sf::Vector2f pointB, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 2;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);
	/// Assign pointA, pointB and shapeColour
	shapeLine::pointA = pointA, shapeLine::pointB = pointB, sl::shapeLine::shapeColour = shapeColour;
}

void sl::shapeLine::populateArr() {
	/// Populate the array with the value of the point(s) and the colour of the shape
	shapeArr[0] = pointA, shapeArr[1] = pointB;
	shapeArr[0].color = sl::shapeLine::shapeColour, shapeArr[1].color = sl::shapeLine::shapeColour;
}

void sl::shapeLine::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeLine::~shapeLine() {
	/// Default Deconstructor
}