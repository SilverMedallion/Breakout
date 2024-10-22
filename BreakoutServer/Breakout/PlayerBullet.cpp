#include "PlayerBullet.h"

PlayerBullet::PlayerBullet( Paddle* paddle) 
{
	_bullet.setSize(sf::Vector2f(5.0f, 15.0f));
	_paddle = paddle;
	_paddlePosition = paddle->getPosition();
	_paddleSize = paddle->getSize();

	sf::Vector2f bulletSpawnPosition;
	bulletSpawnPosition.x = _paddlePosition.x + (_paddleSize.x / 2);
	bulletSpawnPosition.y = _paddlePosition.y - _paddleSize.y; 

	_bullet.setPosition(bulletSpawnPosition.x, bulletSpawnPosition.y);


	_direction = sf::Vector2f(0.0f, _velocity);
		
	
}

PlayerBullet::~PlayerBullet()
{
}

void PlayerBullet::update(float dt)
{
	_bullet.move(0.0, -_velocity * dt);  //neg to move up the screen

}

void PlayerBullet::render(sf::RenderWindow* window)
{
	window->draw(_bullet);
}

sf::Vector2f PlayerBullet::getPosition() 
{
	
	return _bullet.getPosition();
}


