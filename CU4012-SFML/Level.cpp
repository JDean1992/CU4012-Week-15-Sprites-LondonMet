#include "Level.h"
#include "Player.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	PlayerTex.loadFromFile("gfx/Goomba.png");

	PlayerSprite.setTexture(&PlayerTex);
	PlayerSprite.setSize(sf::Vector2f(100, 100));
	PlayerSprite.setPosition(300, 300);
	PlayerSprite.setVelocity(sf::Vector2f(30, 0));
	PlayerSprite.setInput(input);

	EN1.loadFromFile("gfx/Goku.png");
	Enemy1.setTexture(&EN1);
		Enemy1.setSize(sf::Vector2f(100, 100));
		Enemy1.setPosition(400, 400);

		EN2.loadFromFile("gfx/Beach_Ball.png");
		Enemy2.setTexture(&EN2);
		
		Enemy2.setSize(sf::Vector2f(100, 100));
		Enemy2.setPosition(500, 500);

		move = sf::Vector2f(100, 0);
		move1 = sf::Vector2f(0, 100);

		Enemy1.setWindow(window);
		Enemy2.setWindow(window);
		

		

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();

		
	}
	PlayerSprite.handleInput(dt);




}

// Update game objects
void Level::update(float dt)
{
	Enemy1.update(dt, move);
	Enemy2.update(dt,  move1);

}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(PlayerSprite);
	window->draw(Enemy1);
	window->draw(Enemy2);

	endDraw();
}
