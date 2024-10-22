#pragma once
#include "Paddle.h"
#include "PlayerBullet.h"
#include "SFML/Graphics.hpp"
#include "PlayerBullet.h"

class PlayerBulletManager
{
public:

    PlayerBulletManager(sf::RenderWindow* window, Paddle* paddle);
    ~PlayerBulletManager();

    void spawnBullet();

    void update(float dt);
    void render();
    void spawnBullet(); // Method to spawn a bullet
    void checkCollision(); // Check collision with enemy

private:
    sf::RenderWindow* _window;
    Paddle* _paddle;
    std::vector<PlayerBullet> bullets; //current bullets in scene

};

