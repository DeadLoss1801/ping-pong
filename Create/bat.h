#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;


class Bat
{
private:
	Vector2f position;

	// Rectangle Shape object
	RectangleShape batShape;
	float batspeed = .3f;
public:
	Bat(float startX, float startY);
	
	FloatRect getPosition();
	RectangleShape getShape();
	void moveLeft();
	void moveRight();
	void update();
};