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

    //set up listener to liseten for connections
    sf::TcpListener listener;
    listener.setBlocking(false);      //if error binding listener still run game solo 

    // bind the listener to a port
    if (listener.listen(53000) == sf::Socket::Done)
    {
        std::cout << "Listener bound to port" << std::endl;
    }
    else {
        std::cout << "ERROR binding listener to the port" << std::endl;
    }

    // accept a new connection and store it as client socket
    sf::TcpSocket client;               
    client.setBlocking(false); //set client as non blocking so if not accepted does not blo
    //accept client trying to connect
    
    // use "client" to communicate with the connected client,
    // and continue to accept new connections with the listener
   

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

        //check for client connections
        if (listener.accept(client) == sf::Socket::Done) {
            std::cout << "client has connected " << std::endl;
        }

        //send network data

        window.clear();
        gameManager.render();
        window.display();
    }

    return 0;
}
