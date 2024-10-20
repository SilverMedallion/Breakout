#include <SFML/Graphics.hpp>
#include "GameManager.h"
#include <SFML/Network.hpp>


#include <iostream>

int main()
{

    sf::RenderWindow window(sf::VideoMode(1000, 800), "Breakout");
    GameManager gameManager(&window);
    gameManager.initialize();

    sf::Clock clock;
    float deltaTime;

    //set up socket to connect to server
    sf::TcpSocket socket;
    //socket.setBlocking(false);      //if error binding listener still run game solo 

    sf::Socket::Status status = socket.connect("192.168.0.72", 53000);
    do {
        
        if (status != sf::Socket::Done)
        {
            // error..
            std::cout << "Error binding listener to a port" << std::endl;
        }
        else if (status == sf::Socket::Done)
        {
            //successfull connectin to server
            std::cout << "CONNECTED TO SERVER !!!!!!!!!!!!!!" << std::endl;
        }
    } while (status != sf::Socket::Done);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        deltaTime = clock.restart().asSeconds();

        gameManager.update(deltaTime);

        //send network data

        window.clear();
        gameManager.render();
        window.display();
    }

    return 0;
}
