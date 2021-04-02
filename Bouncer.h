//
// Created by Erica on 03/13/2021.
//

#ifndef BOUNCINGOBJECTS_BOUNCER_H
#define BOUNCINGOBJECTS_BOUNCER_H
#include <SFML/Graphics.hpp>

template<class T>
class Bouncer
{
public:
    void bounce(sf::Vector2u windowBounds);
    Bouncer();
    Bouncer(T& object);
//Author: Erica Carballo
private:
    T& object;
    int xStart;
    int yStart;
    int xCurrentMov;
    int yCurrentMov;

};

#include "Bouncer.cpp"
#endif //BOUNCINGOBJECTS_BOUNCER_H
