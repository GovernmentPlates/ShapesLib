/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML window in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*
*
* Author: P2533140 (Dominic H.)
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application as well as examples of using ShapesLib
*/

#include "SFML/Graphics.hpp"
#include "shapeDot.h"
#include "shapeLine.h"
#include "shapeRectangle.h"
#include "shapeSquare.h"
#include "shapeTriangle.h"
#include "shapeArc.h"
#include "shapeEllipse.h"
#include "shapeCircle.h"


int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes (P2533140)");
	window.setFramerateLimit(60);

	//Example shapes
	sl::shapeDot exDot(sf::Vector2f(200, 400), sf::Color::Yellow); //define a dot
	exDot.sl::shapeDot::populateArr();

	sl::shapeLine exLine(sf::Vector2f(200, 180), sf::Vector2f(400, 250), sf::Color::Green); //define a line
	exLine.sl::shapeLine::populateArr();

	sl::shapeRectangle exRect(sf::Vector2f(100, 100), sf::Vector2f(100, 200), sf::Vector2f(150, 200), sf::Vector2f(150, 100), sf::Color::Red); //define a rectangle
	exRect.sl::shapeRectangle::populateArr();

	sl::shapeSquare exSquare(sf::Vector2f(350, 350), sf::Vector2f(250, 250), sf::Color::Magenta); //define a square
	exSquare.sl::shapeSquare::populateArr();

	sl::shapeTriangle exTriangle(sf::Vector2f(500, 300), sf::Vector2f(600, 150), sf::Vector2f(700, 300), sf::Color::Cyan); //define a triangle
	exTriangle.sl::shapeTriangle::populateArr();

	sl::shapeArc exArc(sf::Vector2f(100.f, 450.f), 50, 10, 360, 69, sf::Color::Yellow); //define a arc
	exArc.sl::shapeArc::populateArr();

	sl::shapeEllipse exEllipse(sf::Vector2f(25.f, 200.f), 10, 20, 0, sf::Color::White); //define a ellipse
	exEllipse.sl::shapeEllipse::populateArr();

	sl::shapeCircle exCircle(sf::Vector2f(150.f, 300.f), 50, 200, sf::Color(255, 128, 0, 255)); //define a circle
	exCircle.sl::shapeCircle::populateArr();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		
		//Draw shapes to the window

		window.draw(exDot);

		window.draw(exLine);

		window.draw(exRect);

		window.draw(exSquare);

		window.draw(exTriangle);

		window.draw(exArc);

		window.draw(exEllipse);

		window.draw(exCircle);

		window.display();
	}
}
