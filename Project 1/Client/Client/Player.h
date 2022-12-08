#pragma once
#include <SFML/Graphics.hpp>
class Player
{
public:
	Player();
	~Player();

	void move();
	void update(sf::Time t_deltaTime);
	void render(sf::RenderWindow& m_window);

	sf::CircleShape m_player;
	//ints
	int m_playerId = 0;

	//floats
	float speed = 2.0f; 

	//bools
	bool alive = false;
private:

};

