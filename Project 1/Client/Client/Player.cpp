#include "Player.h"
#include <iostream>

Player::Player()
{
	alive = true;
	m_player.setRadius(15.0f);
	m_player.setOrigin(7.5f, 7.5f);
	m_player.setPosition(140.0f, 140.0f);
	m_player.setFillColor(sf::Color::Magenta);
}

Player::~Player()
{
}

void Player::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_player.move(0, -speed);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_player.move(-speed, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_player.move(0, speed);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_player.move(speed, 0);
	}
}

void Player::update(sf::Time t_deltaTime)
{
	if (alive == true)
	{
		move();
	}
}

void Player::render(sf::RenderWindow& m_window)
{
	if (alive == true)
	{
		m_window.draw(m_player);
	}
}





