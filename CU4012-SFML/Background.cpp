#include "Background.h"

Background::Background()
{
	view.setCenter(200.f, 200.f);
}
Background::~Background()
{

}

void Background::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		view.move(-0.1,  0);
		window->setView(view);
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		view.move(0.1, 0);
		window->setView(view);
	}
}