// Created by kleymuner on 22.11.2025.


#include "User.h"
#include <random>

User::User()
{
    this->id_generation();
}

User::~User()
{

}

string User::id_generation()
{
    string identify = "";

    for (int i = 0; i < 48; i ++)
    {
        identify[i] = rand() % 256;
    }

    return identify;
}

void User::receive_message (Server* Server) {
    return ;
};
