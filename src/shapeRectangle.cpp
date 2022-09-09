/**
 * @file shapeRectangle.cpp
 * @brief Defines the functionality of the functions - as set out in shapeRectangle.h
 */
#pragma once
#include "shapeRectangle.h"

sl::shapeRectangle::shapeRectangle() {
	/// Default Constructor
}

sl::shapeRectangle::shapeRectangle(sf::Vector2f pointA, sf::Vector2f pointB, sf::Vector2f pointC, sf::Vector2f pointD, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 5;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);

	/// Assign points and shapeColour
	shapeRectangle::pointA = pointA, shapeRectangle::pointB = pointB, shapeRectangle::pointC = pointC, shapeRectangle::pointD = pointD;
	sl::shapeRectangle::shapeColour = shapeColour;
}

void sl::shapeRectangle::populateArr() {
	/// Populate the array with the value of the point(s) and the colour of the shape
	shapeArr[0] = pointA, shapeArr[1] = pointB, shapeArr[2] = pointC, shapeArr[3] = pointD, shapeArr[4] = pointA;
	shapeArr[0].color = sl::shapeRectangle::shapeColour;
	shapeArr[1].color = sl::shapeRectangle::shapeColour;
	shapeArr[2].color = sl::shapeRectangle::shapeColour;
	shapeArr[3].color = sl::shapeRectangle::shapeColour;
	shapeArr[4].color = sl::shapeRectangle::shapeColour;
}

void sl::shapeRectangle::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeRectangle::~shapeRectangle() {
	/// Default Deconstructor
}