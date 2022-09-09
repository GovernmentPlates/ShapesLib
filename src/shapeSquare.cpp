/**
 * @file shapeSquare.cpp
 * @brief Defines the functionality of the functions - as set out in shapeSquare.h
 */
#pragma once
#include "shapeSquare.h"

sl::shapeSquare::shapeSquare() {
	/// Default Constructor
}

sl::shapeSquare::shapeSquare(sf::Vector2f pointA, sf::Vector2f pointB, sf::Color shapeColour) {
	/// Define shapeArrSize, then resize the array followed by setting the type of primitive (reference) points.
	shapeArrSize = 5;
	shapeArr.resize(shapeArrSize), shapeArr.setPrimitiveType(sf::LinesStrip);
	/// Assign points (including assigning corresponding points to x and y axis to create the square) and shapeColour
	shapeSquare::pointA = pointA, shapeSquare::pointB = sf::Vector2f(pointA.x, pointB.y), sl::shapeSquare::pointC = pointB, sl::shapeSquare::pointD = sf::Vector2f(pointB.x, pointA.y);
	sl::shapeSquare::shapeColour = shapeColour;
}

void sl::shapeSquare::populateArr() {
	/// Populate the array with the value of the point(s) and the colour of the shape
	shapeArr[0] = pointA, shapeArr[1] = pointB, shapeArr[2] = pointC, shapeArr[3] = pointD, shapeArr[4] = pointA;
	shapeArr[0].color = sl::shapeRectangle::shapeColour;
	shapeArr[1].color = sl::shapeRectangle::shapeColour;
	shapeArr[2].color = sl::shapeRectangle::shapeColour;
	shapeArr[3].color = sl::shapeRectangle::shapeColour;
	shapeArr[4].color = sl::shapeRectangle::shapeColour;
}

void sl::shapeSquare::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(shapeArr, states);
}

sl::shapeSquare::~shapeSquare() {
	/// Default Deconstructor
}