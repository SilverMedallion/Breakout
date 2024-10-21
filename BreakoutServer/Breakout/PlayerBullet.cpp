#include "PlayerBullet.h"

PlayerBullet::PlayerBullet(sf::RenderWindow* window, float velcoity, Paddle* paddle) 
{
	_bullet.setRadius(RADIUS);
	_isAlive = false;
	_paddle = paddle;
	_paddlePosition = paddle->getPosition();
	_paddleSize = paddle->getSize();

	sf::Vector2f bulletSpawnPosition;
	bulletSpawnPosition.x = _paddlePosition.x + (_paddleSize.x / 2) - _bullet.getRadius();
	bulletSpawnPosition.y = _paddlePosition.y - _paddleSize.y; 

	_direction = (0.0, speed)
		
}

PlayerBullet::~PlayerBullet()
{
}

void PlayerBullet::update(float dt)
{
	_bullet.move()
}


