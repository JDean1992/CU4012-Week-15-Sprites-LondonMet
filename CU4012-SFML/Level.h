#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include "Background.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;

	Player PlayerSprite;
	sf::Texture PlayerTex;

	Enemy Enemy1;
	sf::Texture EN1;
	Enemy Enemy2;
	sf::Texture EN2;

	sf::Vector2f move, move1;

	Cursor mousePointer;
	sf::Texture cursorTex;

	Background bg;
	sf::Texture BackgroundTex;


};