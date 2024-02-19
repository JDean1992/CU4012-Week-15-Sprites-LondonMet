#include"Cursor.h"


Cursor::Cursor()
{

}
Cursor::~Cursor()
{

}

void Cursor::update(float dt)
{
	float MouseX = input -> getMouseX();
	float MouseY = input-> getMouseY();

	setPosition(sf::Vector2f(MouseX, MouseY));


}