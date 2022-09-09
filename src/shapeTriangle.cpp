/**
 * @file shapeTriangle.cpp
 * @brief Defines the functionality of the functions - as set out in shapeTriangle.h
 */
#pragma once
#include "shapeTriangle.h"

sl::shapeTriangle::shapeTriangle() {
	/// Default Constructor
}

sl::shapeTriangle::shapeTriangle(sf::Vector2f pointA, sf::Vector2f pointB, sf::Vector2f pointC, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 4;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);

	/// Assign points and shapeColour
	shapeTriangle::pointA = pointA, shapeTriangle::pointB = pointB, shapeTriangle::pointC = pointC;
	shapeTriangle::shapeColour = shapeColour;
}

void sl::shapeTriangle::populateArr() {
	/// Populate the array with the value of the point(s) and the colour of the shape
	shapeArr[0] = pointA, shapeArr[1] = pointB, shapeArr[2] = pointC, shapeArr[3] = pointA;
	shapeArr[0].color = shapeTriangle::shapeColour;
	shapeArr[1].color = shapeTriangle::shapeColour;
	shapeArr[2].color = shapeTriangle::shapeColour;
	shapeArr[3].color = shapeTriangle::shapeColour;
}

void sl::shapeTriangle::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeTriangle::~shapeTriangle() {
	/// Default Deconstructor
}