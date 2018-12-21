#pragma once
#include "SFML/Graphics.hpp"

class Entity  
{
private:

	static sf::RenderWindow* _win;

	virtual void Draw() = 0;
	virtual void Update() = 0;

public:

	static void LoadWindow(sf::RenderWindow* win);

	Entity();
};

