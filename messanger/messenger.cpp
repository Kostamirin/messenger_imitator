// Created by kleymuner on 22.11.2025.


#include "Messanger.h"


Messanger::Messanger()
{
    this->setup();
}

Messanger::~Messanger()
{

}


void Messanger::setup()
{
    cout <<"Enter your name: ";
    cin >>User->name;
    cout <<endl;
    std::cout <<"Enter your bio (Optional): ";
    cin >>User->bio;
}

