// Created by kleymuner on 22.11.2025.


#include "Messenger.h"


Messenger::Messenger()
{
    this->setup();
}

Messenger::~Messenger()
{

}


void Messenger::setup()
{
    cout <<"Enter your name: ";
    cin >>Admin->name;
    cout <<endl;
    std::cout <<"Enter your bio (Optional): ";
    cin >>Admin->bio;
}

