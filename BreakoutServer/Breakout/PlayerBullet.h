#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include "PlayerBulletManager.h"
#include "Paddle.h"


class PlayerBullet
{
public:
    PlayerBullet(Paddle* paddle);
    ~PlayerBullet();
    void update(float dt);
    void render(sf::RenderWindow* window);
    sf::Vector2f getPosition();

    

    

private:
    sf::RectangleShape _bullet;
    sf::Vector2f _direction;
    sf::RenderWindow* _window;
    float _velocity = 10.f; 

    sf::Vector2f _bulletPosition;

    bool _isAlive;
    
    Paddle* _paddle;
    
    sf::Vector2f _paddlePosition;
    sf::Vector2f _paddleSize;


    static constexpr float RADIUS = 10.0f;
    static constexpr float VELOCITY = 350.0f;   // for reference.
};

