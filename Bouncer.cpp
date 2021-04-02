//
// Created by Erica on 03/13/2021.
//
#ifndef BOUNCINGOBJECTS_BOUNCER_CPP
#define BOUNCINGOBJECTS_BOUNCER_CPP

#include "Bouncer.h"


template<class T>
void Bouncer<T>::bounce(sf::Vector2u windowSize)
{
    object.move(xCurrentMov, yCurrentMov);

    if(windowSize.y <= object.getGlobalBounds().top + object.getGlobalBounds().height)//Will be true if the object touches or goes beyond the bottom part of the window.
    {
        yCurrentMov = yCurrentMov * -1;
    }

    if(object.getGlobalBounds().top <= 0)//true if object top is above window.
    {
        yCurrentMov = yCurrentMov * -1;
    }

    if(windowSize.x <= object.getGlobalBounds().left + object.getGlobalBounds().width)//true if object's right side is beyond right side of window.
    {
        xCurrentMov = xCurrentMov * -1;
    }
//Author: Erica Carballo
    if(object.getGlobalBounds().left <= 0)//true if object's left is beyond left side of window.
    {
        xCurrentMov = xCurrentMov * -1;
    }

}

template<class T>
Bouncer<T>::Bouncer()
{
    exit(1);
}

template<class T>
Bouncer<T>::Bouncer(T& object) : object(object) , xStart(rand() % 1920), yStart(rand() % 1080), xCurrentMov(1), yCurrentMov(1)
{

}

#endif