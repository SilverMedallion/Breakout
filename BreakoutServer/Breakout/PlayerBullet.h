#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "PlayerBulletManager.h"
#include "Paddle.h"


class PlayerBullet
{
public:
    PlayerBullet(sf::RenderWindow* window, float velcoity, Paddle* paddle);
    ~PlayerBullet();

    
private:
	int velocity = 1;
	int damage = 1;


       
    void update(float dt);
    void render();
    void setVelocity(float coeff, float duration);
    

private:
    sf::CircleShape _bullet;
    sf::Vector2f _direction;
    sf::RenderWindow* _window;
    float _velocity;
    bool _isAlive;
    sf::Vector2f _direction;

    
    Paddle* _paddle;
    
    sf::Vector2f _paddlePosition;
    sf::Vector2f _paddleSize;


    static constexpr float RADIUS = 10.0f;
    static constexpr float VELOCITY = 350.0f;   // for reference.
};

