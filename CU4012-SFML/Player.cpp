#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W))
	{
		//input->setKeyUp(sf::Keyboard::W);
		velocity = sf::Vector2f(0, -300);
		move(velocity * dt);

	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		//input->setKeyUp(sf::Keyboard::W);
		velocity = sf::Vector2f(0, 300);
		move(velocity * dt);

	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		//input->setKeyUp(sf::Keyboard::W);
		velocity = sf::Vector2f(-300,0);
		move(velocity * dt);

	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		//input->setKeyUp(sf::Keyboard::W);
		velocity = sf::Vector2f(300,0);
		move(velocity * dt);

	}

}