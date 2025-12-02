// Created by kleymuner on 22.11.2025.


#include "Messenger.h"


Messenger::Messenger()
{
    this->welcome_screen();
    this->setup();
}

Messenger::~Messenger()
{

}

void Messenger::welcome_screen()
{
    cout <<"Welcome to Messenger!" <<endl;
    cout <<"Choose the option: " <<endl;
    cout <<"1. Create new account" <<endl;
    cout <<"2. Import existed database" <<endl;
    cout <<"Choice: " ;
    cin >> this->choice;
}

void Messenger::setup()
{
    cout <<"Enter your name: ";
    cin >>Admin->name;
    cout <<endl;
    std::cout <<"Enter your bio (Optional): ";
    cin >>Admin->bio;
}

