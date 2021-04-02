//Author: Erica Carballo
//Project name: Bouncing Ball
//Description: Program that bounces a ball around the screen.
//Last Changed: March 14, 2021

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Bouncer.h"


int main() {

    sf::CircleShape ball;
    Bouncer<sf::CircleShape> aBouncer(ball);
    ball.setRadius(50);
    ball.setFillColor(sf::Color::Red);


    sf::RenderWindow window({1920, 1080, 32}, "Bouncing Ball");

    while(window.isOpen())
    {
//Author: Erica Carballo
        sf::Event event;

        while(window.pollEvent(event))
        {

            if(event.type == sf::Event::Closed)

                window.close();

        }
        aBouncer.bounce(window.getSize());
        window.clear(sf::Color::Black);

        window.draw(ball);

        window.display();

    }


    return 0;
}
