#pragma once

#include <SFML/Graphics.hpp>
#include "CONSTANTS.h"

class GameManager; //forward declartion of game manager

class Paddle
{
public:
    Paddle(sf::RenderWindow* window, GameManager* gameManager);
    ~Paddle();

    void moveLeft(float dt);
    void moveRight(float dt);
    void shoot();
    void update(float dt);
    void render();
    sf::FloatRect getBounds() const;
    void setWidth(float coeff, float duration);

    //getters for bullet spawning
    sf::Vector2f getPosition() {
        return _sprite.getPosition();
    }

    sf::Vector2f getSize() {
        return _sprite.getSize();
    }

private:

    GameManager* _gameManager;  //store reference to game manager
    float _fireRate = 0.5f;
    float _timeSinceLastShot=0.0f;
    sf::RenderWindow* _window;
    sf::RectangleShape _sprite;
    float _width = PADDLE_WIDTH;
    bool _isAlive;
    float _timeInNewSize = 0.0f;
};
